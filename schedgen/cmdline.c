/*
  File autogenerated by gengetopt version 2.23
  generated with the following command:
  gengetopt 

  The developers of gengetopt consider the fixed text that goes in all
  gengetopt output files to be in the public domain:
  we make no copyright claims on it.
*/

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef FIX_UNUSED
#define FIX_UNUSED(X) (void) (X) /* avoid warnings for unused params */
#endif

#include <getopt.h>

#include "cmdline.h"

const char *gengetopt_args_info_purpose = "";

const char *gengetopt_args_info_usage = "Usage: schedgen [OPTION]...";

const char *gengetopt_args_info_versiontext = "";

const char *gengetopt_args_info_description = "";

const char *gengetopt_args_info_help[] = {
  "  -h, --help                 Print help and exit",
  "  -V, --version              Print version and exit",
  "  -p, --ptrn=STRING          Name of the communication pattern that should be\n                               used to generate a schedule  (possible\n                               values=\"binomialtreereduce\",\n                               \"binarytreebcast\", \"binomialtreebcast\",\n                               \"nwaydissemination\", \"pipelinedring\",\n                               \"pipelinedringdep\", \"doublering\",\n                               \"gather\", \"scatter\", \"linbarrier\",\n                               \"trace\", \"dissemination\", \"random_bisect\",\n                               \"random_bisect_fd_sym\", \"linear_alltoall\",\n                               \"linear_alltoallv\", \"allreduce_recdoub\",\n                               \"allreduce_ring\", \"resnet152\",\n                               \"chained_dissem\" default=`binomialtreebcast')",
  "  -s, --commsize=INT         Number of nodes that should be used in the\n                               communication pattern  (default=`8')",
  "      --timemult=INT         Time multiplier, relative to microsecond (e.g.,\n                               nanoseconds -> 1000)  (default=`1000')",
  "  -d, --datasize=INT         Number of bytes that are transmitted in the\n                               communication patttern in a basic step\n                               (default=`1')",
  "  -o, --filename=STRING      Filename for the name of the generated schedule\n                               (default=`schedule.goal')",
  "      --nway=INT             Fanout for the n-way dissemination pattern\n                               (default=`1')",
  "      --root=INT             Root node for certain patterns  (default=`0')",
  "      --segmentsize=INT      Segment size for pipelined pattern  (default=`1')",
  "      --nb=INT               nonblocking execution of collectives (provide\n                               length of local operation)  (default=`0')",
  "      --nb-poll=INT          polling interval for nonblocking execution\n                               (default=`0')",
  "      --cpu=INT              select CPU to execute computation  (default=`0')",
  "      --rpl-dep-cmp=INT      replaces dependencies with fixed computation\n                               (parameter represents computation time. If -1,\n                               does not replace dependencies.)  (default=`-1')",
  "      --a2av-skew-ratio=INT  In the alltoallv pattern, each chunk of data sent\n                               by each rank is of a random size. The size of\n                               the chunk with id 'root' is of size 'datasize'.\n                               All the other chunks are of random size, and\n                               a2av-skew-ratio times smaller.  (default=`1')",
  "      --traces=STRING        Tracefile for rank 0 (others are autodetected)",
  "      --traces-start=STRING  file with start lines in trace files (is updated\n                               after run if trace-nops is given)",
  "      --traces-nops=INT      number of operations to write to file (0=all)\n                               (default=`0')",
  "      --traces-extr=INT      extrapolation factor for traces  (default=`1')",
  "      --traces-print=INT     print each operation  (default=`0')",
  "      --traces-nop2p         do not consider point-to-point communication\n                               (default=off)",
  "      --traces-nocolls       do not consider collective communication\n                               (default=off)",
  "      --traces-nbcify=INT    turn blocking collectives into non-blocking colls,\n                               time to pre-post NBCs  (default=`0')",
    0
};

typedef enum {ARG_NO
  , ARG_FLAG
  , ARG_STRING
  , ARG_INT
} cmdline_parser_arg_type;

static
void clear_given (struct gengetopt_args_info *args_info);
static
void clear_args (struct gengetopt_args_info *args_info);

static int
cmdline_parser_internal (int argc, char **argv, struct gengetopt_args_info *args_info,
                        struct cmdline_parser_params *params, const char *additional_error);


const char *cmdline_parser_ptrn_values[] = {"binomialtreereduce", "binarytreebcast", "binomialtreebcast", "nwaydissemination", "pipelinedring", "pipelinedringdep", "doublering", "gather", "scatter", "linbarrier", "trace", "dissemination", "random_bisect", "random_bisect_fd_sym", "linear_alltoall", "linear_alltoallv", "allreduce_recdoub", "allreduce_ring", "resnet152", "chained_dissem", "permutation", "permutation_across", "incast", "special_incast", "multiple_permutation", 0}; /*< Possible values for ptrn. */

static char *
gengetopt_strdup (const char *s);

static
void clear_given (struct gengetopt_args_info *args_info)
{
  args_info->help_given = 0 ;
  args_info->version_given = 0 ;
  args_info->ptrn_given = 0 ;
  args_info->commsize_given = 0 ;
  args_info->timemult_given = 0 ;
  args_info->datasize_given = 0 ;
  args_info->filename_given = 0 ;
  args_info->nway_given = 0 ;
  args_info->root_given = 0 ;
  args_info->segmentsize_given = 0 ;
  args_info->nb_given = 0 ;
  args_info->nb_poll_given = 0 ;
  args_info->cpu_given = 0 ;
  args_info->rpl_dep_cmp_given = 0 ;
  args_info->a2av_skew_ratio_given = 0 ;
  args_info->traces_given = 0 ;
  args_info->traces_start_given = 0 ;
  args_info->traces_nops_given = 0 ;
  args_info->traces_extr_given = 0 ;
  args_info->traces_print_given = 0 ;
  args_info->traces_nop2p_given = 0 ;
  args_info->traces_nocolls_given = 0 ;
  args_info->traces_nbcify_given = 0 ;
}

static
void clear_args (struct gengetopt_args_info *args_info)
{
  FIX_UNUSED (args_info);
  args_info->ptrn_arg = gengetopt_strdup ("binomialtreebcast");
  args_info->ptrn_orig = NULL;
  args_info->commsize_arg = 8;
  args_info->commsize_orig = NULL;
  args_info->timemult_arg = 1000;
  args_info->timemult_orig = NULL;
  args_info->datasize_arg = 1;
  args_info->datasize_orig = NULL;
  args_info->filename_arg = gengetopt_strdup ("schedule.goal");
  args_info->filename_orig = NULL;
  args_info->nway_arg = 1;
  args_info->nway_orig = NULL;
  args_info->root_arg = 0;
  args_info->root_orig = NULL;
  args_info->segmentsize_arg = 1;
  args_info->segmentsize_orig = NULL;
  args_info->nb_arg = 0;
  args_info->nb_orig = NULL;
  args_info->nb_poll_arg = 0;
  args_info->nb_poll_orig = NULL;
  args_info->cpu_arg = 0;
  args_info->cpu_orig = NULL;
  args_info->rpl_dep_cmp_arg = -1;
  args_info->rpl_dep_cmp_orig = NULL;
  args_info->a2av_skew_ratio_arg = 1;
  args_info->a2av_skew_ratio_orig = NULL;
  args_info->traces_arg = NULL;
  args_info->traces_orig = NULL;
  args_info->traces_start_arg = NULL;
  args_info->traces_start_orig = NULL;
  args_info->traces_nops_arg = 0;
  args_info->traces_nops_orig = NULL;
  args_info->traces_extr_arg = 1;
  args_info->traces_extr_orig = NULL;
  args_info->traces_print_arg = 0;
  args_info->traces_print_orig = NULL;
  args_info->traces_nop2p_flag = 0;
  args_info->traces_nocolls_flag = 0;
  args_info->traces_nbcify_arg = 0;
  args_info->traces_nbcify_orig = NULL;
  
}

static
void init_args_info(struct gengetopt_args_info *args_info)
{


  args_info->help_help = gengetopt_args_info_help[0] ;
  args_info->version_help = gengetopt_args_info_help[1] ;
  args_info->ptrn_help = gengetopt_args_info_help[2] ;
  args_info->commsize_help = gengetopt_args_info_help[3] ;
  args_info->timemult_help = gengetopt_args_info_help[4] ;
  args_info->datasize_help = gengetopt_args_info_help[5] ;
  args_info->filename_help = gengetopt_args_info_help[6] ;
  args_info->nway_help = gengetopt_args_info_help[7] ;
  args_info->root_help = gengetopt_args_info_help[8] ;
  args_info->segmentsize_help = gengetopt_args_info_help[9] ;
  args_info->nb_help = gengetopt_args_info_help[10] ;
  args_info->nb_poll_help = gengetopt_args_info_help[11] ;
  args_info->cpu_help = gengetopt_args_info_help[12] ;
  args_info->rpl_dep_cmp_help = gengetopt_args_info_help[13] ;
  args_info->a2av_skew_ratio_help = gengetopt_args_info_help[14] ;
  args_info->traces_help = gengetopt_args_info_help[15] ;
  args_info->traces_start_help = gengetopt_args_info_help[16] ;
  args_info->traces_nops_help = gengetopt_args_info_help[17] ;
  args_info->traces_extr_help = gengetopt_args_info_help[18] ;
  args_info->traces_print_help = gengetopt_args_info_help[19] ;
  args_info->traces_nop2p_help = gengetopt_args_info_help[20] ;
  args_info->traces_nocolls_help = gengetopt_args_info_help[21] ;
  args_info->traces_nbcify_help = gengetopt_args_info_help[22] ;
  
}

void
cmdline_parser_print_version (void)
{
  printf ("%s %s\n",
     (strlen(CMDLINE_PARSER_PACKAGE_NAME) ? CMDLINE_PARSER_PACKAGE_NAME : CMDLINE_PARSER_PACKAGE),
     CMDLINE_PARSER_VERSION);

  if (strlen(gengetopt_args_info_versiontext) > 0)
    printf("\n%s\n", gengetopt_args_info_versiontext);
}

static void print_help_common(void)
{
	size_t len_purpose = strlen(gengetopt_args_info_purpose);
	size_t len_usage = strlen(gengetopt_args_info_usage);

	if (len_usage > 0) {
		printf("%s\n", gengetopt_args_info_usage);
	}
	if (len_purpose > 0) {
		printf("%s\n", gengetopt_args_info_purpose);
	}

	if (len_usage || len_purpose) {
		printf("\n");
	}

	if (strlen(gengetopt_args_info_description) > 0) {
		printf("%s\n\n", gengetopt_args_info_description);
	}
}

void
cmdline_parser_print_help (void)
{
  int i = 0;
  print_help_common();
  while (gengetopt_args_info_help[i])
    printf("%s\n", gengetopt_args_info_help[i++]);
}

void
cmdline_parser_init (struct gengetopt_args_info *args_info)
{
  clear_given (args_info);
  clear_args (args_info);
  init_args_info (args_info);
}

void
cmdline_parser_params_init(struct cmdline_parser_params *params)
{
  if (params)
    { 
      params->override = 0;
      params->initialize = 1;
      params->check_required = 1;
      params->check_ambiguity = 0;
      params->print_errors = 1;
    }
}

struct cmdline_parser_params *
cmdline_parser_params_create(void)
{
  struct cmdline_parser_params *params = 
    (struct cmdline_parser_params *)malloc(sizeof(struct cmdline_parser_params));
  cmdline_parser_params_init(params);  
  return params;
}

static void
free_string_field (char **s)
{
  if (*s)
    {
      free (*s);
      *s = 0;
    }
}


static void
cmdline_parser_release (struct gengetopt_args_info *args_info)
{

  free_string_field (&(args_info->ptrn_arg));
  free_string_field (&(args_info->ptrn_orig));
  free_string_field (&(args_info->commsize_orig));
  free_string_field (&(args_info->timemult_orig));
  free_string_field (&(args_info->datasize_orig));
  free_string_field (&(args_info->filename_arg));
  free_string_field (&(args_info->filename_orig));
  free_string_field (&(args_info->nway_orig));
  free_string_field (&(args_info->root_orig));
  free_string_field (&(args_info->segmentsize_orig));
  free_string_field (&(args_info->nb_orig));
  free_string_field (&(args_info->nb_poll_orig));
  free_string_field (&(args_info->cpu_orig));
  free_string_field (&(args_info->rpl_dep_cmp_orig));
  free_string_field (&(args_info->a2av_skew_ratio_orig));
  free_string_field (&(args_info->traces_arg));
  free_string_field (&(args_info->traces_orig));
  free_string_field (&(args_info->traces_start_arg));
  free_string_field (&(args_info->traces_start_orig));
  free_string_field (&(args_info->traces_nops_orig));
  free_string_field (&(args_info->traces_extr_orig));
  free_string_field (&(args_info->traces_print_orig));
  free_string_field (&(args_info->traces_nbcify_orig));
  
  

  clear_given (args_info);
}

/**
 * @param val the value to check
 * @param values the possible values
 * @return the index of the matched value:
 * -1 if no value matched,
 * -2 if more than one value has matched
 */
static int
check_possible_values(const char *val, const char *values[])
{
  int i, found, last;
  size_t len;

  if (!val)   /* otherwise strlen() crashes below */
    return -1; /* -1 means no argument for the option */

  found = last = 0;

  for (i = 0, len = strlen(val); values[i]; ++i)
    {
      if (strncmp(val, values[i], len) == 0)
        {
          ++found;
          last = i;
          if (strlen(values[i]) == len)
            return i; /* exact macth no need to check more */
        }
    }

  if (found == 1) /* one match: OK */
    return last;

  return (found ? -2 : -1); /* return many values or none matched */
}


static void
write_into_file(FILE *outfile, const char *opt, const char *arg, const char *values[])
{
  int found = -1;
  if (arg) {
    if (values) {
      found = check_possible_values(arg, values);      
    }
    if (found >= 0)
      fprintf(outfile, "%s=\"%s\" # %s\n", opt, arg, values[found]);
    else
      fprintf(outfile, "%s=\"%s\"\n", opt, arg);
  } else {
    fprintf(outfile, "%s\n", opt);
  }
}


int
cmdline_parser_dump(FILE *outfile, struct gengetopt_args_info *args_info)
{
  int i = 0;

  if (!outfile)
    {
      fprintf (stderr, "%s: cannot dump options to stream\n", CMDLINE_PARSER_PACKAGE);
      return EXIT_FAILURE;
    }

  if (args_info->help_given)
    write_into_file(outfile, "help", 0, 0 );
  if (args_info->version_given)
    write_into_file(outfile, "version", 0, 0 );
  if (args_info->ptrn_given)
    write_into_file(outfile, "ptrn", args_info->ptrn_orig, cmdline_parser_ptrn_values);
  if (args_info->commsize_given)
    write_into_file(outfile, "commsize", args_info->commsize_orig, 0);
  if (args_info->timemult_given)
    write_into_file(outfile, "timemult", args_info->timemult_orig, 0);
  if (args_info->datasize_given)
    write_into_file(outfile, "datasize", args_info->datasize_orig, 0);
  if (args_info->filename_given)
    write_into_file(outfile, "filename", args_info->filename_orig, 0);
  if (args_info->nway_given)
    write_into_file(outfile, "nway", args_info->nway_orig, 0);
  if (args_info->root_given)
    write_into_file(outfile, "root", args_info->root_orig, 0);
  if (args_info->segmentsize_given)
    write_into_file(outfile, "segmentsize", args_info->segmentsize_orig, 0);
  if (args_info->nb_given)
    write_into_file(outfile, "nb", args_info->nb_orig, 0);
  if (args_info->nb_poll_given)
    write_into_file(outfile, "nb-poll", args_info->nb_poll_orig, 0);
  if (args_info->cpu_given)
    write_into_file(outfile, "cpu", args_info->cpu_orig, 0);
  if (args_info->rpl_dep_cmp_given)
    write_into_file(outfile, "rpl-dep-cmp", args_info->rpl_dep_cmp_orig, 0);
  if (args_info->a2av_skew_ratio_given)
    write_into_file(outfile, "a2av-skew-ratio", args_info->a2av_skew_ratio_orig, 0);
  if (args_info->traces_given)
    write_into_file(outfile, "traces", args_info->traces_orig, 0);
  if (args_info->traces_start_given)
    write_into_file(outfile, "traces-start", args_info->traces_start_orig, 0);
  if (args_info->traces_nops_given)
    write_into_file(outfile, "traces-nops", args_info->traces_nops_orig, 0);
  if (args_info->traces_extr_given)
    write_into_file(outfile, "traces-extr", args_info->traces_extr_orig, 0);
  if (args_info->traces_print_given)
    write_into_file(outfile, "traces-print", args_info->traces_print_orig, 0);
  if (args_info->traces_nop2p_given)
    write_into_file(outfile, "traces-nop2p", 0, 0 );
  if (args_info->traces_nocolls_given)
    write_into_file(outfile, "traces-nocolls", 0, 0 );
  if (args_info->traces_nbcify_given)
    write_into_file(outfile, "traces-nbcify", args_info->traces_nbcify_orig, 0);
  

  i = EXIT_SUCCESS;
  return i;
}

int
cmdline_parser_file_save(const char *filename, struct gengetopt_args_info *args_info)
{
  FILE *outfile;
  int i = 0;

  outfile = fopen(filename, "w");

  if (!outfile)
    {
      fprintf (stderr, "%s: cannot open file for writing: %s\n", CMDLINE_PARSER_PACKAGE, filename);
      return EXIT_FAILURE;
    }

  i = cmdline_parser_dump(outfile, args_info);
  fclose (outfile);

  return i;
}

void
cmdline_parser_free (struct gengetopt_args_info *args_info)
{
  cmdline_parser_release (args_info);
}

/** @brief replacement of strdup, which is not standard */
char *
gengetopt_strdup (const char *s)
{
  char *result = 0;
  if (!s)
    return result;

  result = (char*)malloc(strlen(s) + 1);
  if (result == (char*)0)
    return (char*)0;
  strcpy(result, s);
  return result;
}

int
cmdline_parser (int argc, char **argv, struct gengetopt_args_info *args_info)
{
  return cmdline_parser2 (argc, argv, args_info, 0, 1, 1);
}

int
cmdline_parser_ext (int argc, char **argv, struct gengetopt_args_info *args_info,
                   struct cmdline_parser_params *params)
{
  int result;
  result = cmdline_parser_internal (argc, argv, args_info, params, 0);

  if (result == EXIT_FAILURE)
    {
      cmdline_parser_free (args_info);
      exit (EXIT_FAILURE);
    }
  
  return result;
}

int
cmdline_parser2 (int argc, char **argv, struct gengetopt_args_info *args_info, int override, int initialize, int check_required)
{
  int result;
  struct cmdline_parser_params params;
  
  params.override = override;
  params.initialize = initialize;
  params.check_required = check_required;
  params.check_ambiguity = 0;
  params.print_errors = 1;

  result = cmdline_parser_internal (argc, argv, args_info, &params, 0);

  if (result == EXIT_FAILURE)
    {
      cmdline_parser_free (args_info);
      exit (EXIT_FAILURE);
    }
  
  return result;
}

int
cmdline_parser_required (struct gengetopt_args_info *args_info, const char *prog_name)
{
  FIX_UNUSED (args_info);
  FIX_UNUSED (prog_name);
  return EXIT_SUCCESS;
}


static char *package_name = 0;

/**
 * @brief updates an option
 * @param field the generic pointer to the field to update
 * @param orig_field the pointer to the orig field
 * @param field_given the pointer to the number of occurrence of this option
 * @param prev_given the pointer to the number of occurrence already seen
 * @param value the argument for this option (if null no arg was specified)
 * @param possible_values the possible values for this option (if specified)
 * @param default_value the default value (in case the option only accepts fixed values)
 * @param arg_type the type of this option
 * @param check_ambiguity @see cmdline_parser_params.check_ambiguity
 * @param override @see cmdline_parser_params.override
 * @param no_free whether to free a possible previous value
 * @param multiple_option whether this is a multiple option
 * @param long_opt the corresponding long option
 * @param short_opt the corresponding short option (or '-' if none)
 * @param additional_error possible further error specification
 */
static
int update_arg(void *field, char **orig_field,
               unsigned int *field_given, unsigned int *prev_given, 
               char *value, const char *possible_values[],
               const char *default_value,
               cmdline_parser_arg_type arg_type,
               int check_ambiguity, int override,
               int no_free, int multiple_option,
               const char *long_opt, char short_opt,
               const char *additional_error)
{
  char *stop_char = 0;
  const char *val = value;
  int found;
  char **string_field;
  FIX_UNUSED (field);

  stop_char = 0;
  found = 0;

  if (!multiple_option && prev_given && (*prev_given || (check_ambiguity && *field_given)))
    {
      if (short_opt != '-')
        fprintf (stderr, "%s: `--%s' (`-%c') option given more than once%s\n", 
               package_name, long_opt, short_opt,
               (additional_error ? additional_error : ""));
      else
        fprintf (stderr, "%s: `--%s' option given more than once%s\n", 
               package_name, long_opt,
               (additional_error ? additional_error : ""));
      return 1; /* failure */
    }

  if (possible_values && (found = check_possible_values((value ? value : default_value), possible_values)) < 0)
    {
      if (short_opt != '-')
        fprintf (stderr, "%s: %s argument, \"%s\", for option `--%s' (`-%c')%s\n", 
          package_name, (found == -2) ? "ambiguous" : "invalid", value, long_opt, short_opt,
          (additional_error ? additional_error : ""));
      else
        fprintf (stderr, "%s: %s argument, \"%s\", for option `--%s'%s\n", 
          package_name, (found == -2) ? "ambiguous" : "invalid", value, long_opt,
          (additional_error ? additional_error : ""));
      return 1; /* failure */
    }
    
  if (field_given && *field_given && ! override)
    return 0;
  if (prev_given)
    (*prev_given)++;
  if (field_given)
    (*field_given)++;
  if (possible_values)
    val = possible_values[found];

  switch(arg_type) {
  case ARG_FLAG:
    *((int *)field) = !*((int *)field);
    break;
  case ARG_INT:
    if (val) *((int *)field) = strtol (val, &stop_char, 0);
    break;
  case ARG_STRING:
    if (val) {
      string_field = (char **)field;
      if (!no_free && *string_field)
        free (*string_field); /* free previous string */
      *string_field = gengetopt_strdup (val);
    }
    break;
  default:
    break;
  };

  /* check numeric conversion */
  switch(arg_type) {
  case ARG_INT:
    if (val && !(stop_char && *stop_char == '\0')) {
      fprintf(stderr, "%s: invalid numeric value: %s\n", package_name, val);
      return 1; /* failure */
    }
    break;
  default:
    ;
  };

  /* store the original value */
  switch(arg_type) {
  case ARG_NO:
  case ARG_FLAG:
    break;
  default:
    if (value && orig_field) {
      if (no_free) {
        *orig_field = value;
      } else {
        if (*orig_field)
          free (*orig_field); /* free previous string */
        *orig_field = gengetopt_strdup (value);
      }
    }
  };

  return 0; /* OK */
}


int
cmdline_parser_internal (
  int argc, char **argv, struct gengetopt_args_info *args_info,
                        struct cmdline_parser_params *params, const char *additional_error)
{
  int c;	/* Character of the parsed option.  */

  int error_occurred = 0;
  struct gengetopt_args_info local_args_info;
  
  int override;
  int initialize;
  int check_required;
  int check_ambiguity;
  
  package_name = argv[0];
  
  /* TODO: Why is this here? It is not used anywhere. */
  override = params->override;
  FIX_UNUSED(override);

  initialize = params->initialize;
  check_required = params->check_required;

  /* TODO: Why is this here? It is not used anywhere. */
  check_ambiguity = params->check_ambiguity;
  FIX_UNUSED(check_ambiguity);

  if (initialize)
    cmdline_parser_init (args_info);

  cmdline_parser_init (&local_args_info);

  optarg = 0;
  optind = 0;
  opterr = params->print_errors;
  optopt = '?';

  while (1)
    {
      int option_index = 0;

      static struct option long_options[] = {
        { "help",	0, NULL, 'h' },
        { "version",	0, NULL, 'V' },
        { "ptrn",	1, NULL, 'p' },
        { "commsize",	1, NULL, 's' },
        { "timemult",	1, NULL, 0 },
        { "datasize",	1, NULL, 'd' },
        { "filename",	1, NULL, 'o' },
        { "nway",	1, NULL, 0 },
        { "root",	1, NULL, 0 },
        { "segmentsize",	1, NULL, 0 },
        { "nb",	1, NULL, 0 },
        { "nb-poll",	1, NULL, 0 },
        { "cpu",	1, NULL, 0 },
        { "rpl-dep-cmp",	1, NULL, 0 },
        { "a2av-skew-ratio",	1, NULL, 0 },
        { "traces",	1, NULL, 0 },
        { "traces-start",	1, NULL, 0 },
        { "traces-nops",	1, NULL, 0 },
        { "traces-extr",	1, NULL, 0 },
        { "traces-print",	1, NULL, 0 },
        { "traces-nop2p",	0, NULL, 0 },
        { "traces-nocolls",	0, NULL, 0 },
        { "traces-nbcify",	1, NULL, 0 },
        { 0,  0, 0, 0 }
      };

      c = getopt_long (argc, argv, "hVp:s:d:o:", long_options, &option_index);

      if (c == -1) break;	/* Exit from `while (1)' loop.  */

      switch (c)
        {
        case 'h':	/* Print help and exit.  */
          cmdline_parser_print_help ();
          cmdline_parser_free (&local_args_info);
          exit (EXIT_SUCCESS);

        case 'V':	/* Print version and exit.  */
          cmdline_parser_print_version ();
          cmdline_parser_free (&local_args_info);
          exit (EXIT_SUCCESS);

        case 'p':	/* Name of the communication pattern that should be used to generate a schedule.  */
        
        
          if (update_arg( (void *)&(args_info->ptrn_arg), 
               &(args_info->ptrn_orig), &(args_info->ptrn_given),
              &(local_args_info.ptrn_given), optarg, cmdline_parser_ptrn_values, "binomialtreebcast", ARG_STRING,
              check_ambiguity, override, 0, 0,
              "ptrn", 'p',
              additional_error))
            goto failure;
        
          break;
        case 's':	/* Number of nodes that should be used in the communication pattern.  */
        
        
          if (update_arg( (void *)&(args_info->commsize_arg), 
               &(args_info->commsize_orig), &(args_info->commsize_given),
              &(local_args_info.commsize_given), optarg, 0, "8", ARG_INT,
              check_ambiguity, override, 0, 0,
              "commsize", 's',
              additional_error))
            goto failure;
        
          break;
        case 'd':	/* Number of bytes that are transmitted in the communication patttern in a basic step.  */
        
        
          if (update_arg( (void *)&(args_info->datasize_arg), 
               &(args_info->datasize_orig), &(args_info->datasize_given),
              &(local_args_info.datasize_given), optarg, 0, "1", ARG_INT,
              check_ambiguity, override, 0, 0,
              "datasize", 'd',
              additional_error))
            goto failure;
        
          break;
        case 'o':	/* Filename for the name of the generated schedule.  */
        
        
          if (update_arg( (void *)&(args_info->filename_arg), 
               &(args_info->filename_orig), &(args_info->filename_given),
              &(local_args_info.filename_given), optarg, 0, "schedule.goal", ARG_STRING,
              check_ambiguity, override, 0, 0,
              "filename", 'o',
              additional_error))
            goto failure;
        
          break;

        case 0:	/* Long option with no short option */
          /* Time multiplier, relative to microsecond (e.g., nanoseconds -> 1000).  */
          if (strcmp (long_options[option_index].name, "timemult") == 0)
          {
          
          
            if (update_arg( (void *)&(args_info->timemult_arg), 
                 &(args_info->timemult_orig), &(args_info->timemult_given),
                &(local_args_info.timemult_given), optarg, 0, "1000", ARG_INT,
                check_ambiguity, override, 0, 0,
                "timemult", '-',
                additional_error))
              goto failure;
          
          }
          /* Fanout for the n-way dissemination pattern.  */
          else if (strcmp (long_options[option_index].name, "nway") == 0)
          {
          
          
            if (update_arg( (void *)&(args_info->nway_arg), 
                 &(args_info->nway_orig), &(args_info->nway_given),
                &(local_args_info.nway_given), optarg, 0, "1", ARG_INT,
                check_ambiguity, override, 0, 0,
                "nway", '-',
                additional_error))
              goto failure;
          
          }
          /* Root node for certain patterns.  */
          else if (strcmp (long_options[option_index].name, "root") == 0)
          {
          
          
            if (update_arg( (void *)&(args_info->root_arg), 
                 &(args_info->root_orig), &(args_info->root_given),
                &(local_args_info.root_given), optarg, 0, "0", ARG_INT,
                check_ambiguity, override, 0, 0,
                "root", '-',
                additional_error))
              goto failure;
          
          }
          /* Segment size for pipelined pattern.  */
          else if (strcmp (long_options[option_index].name, "segmentsize") == 0)
          {
          
          
            if (update_arg( (void *)&(args_info->segmentsize_arg), 
                 &(args_info->segmentsize_orig), &(args_info->segmentsize_given),
                &(local_args_info.segmentsize_given), optarg, 0, "1", ARG_INT,
                check_ambiguity, override, 0, 0,
                "segmentsize", '-',
                additional_error))
              goto failure;
          
          }
          /* nonblocking execution of collectives (provide length of local operation).  */
          else if (strcmp (long_options[option_index].name, "nb") == 0)
          {
          
          
            if (update_arg( (void *)&(args_info->nb_arg), 
                 &(args_info->nb_orig), &(args_info->nb_given),
                &(local_args_info.nb_given), optarg, 0, "0", ARG_INT,
                check_ambiguity, override, 0, 0,
                "nb", '-',
                additional_error))
              goto failure;
          
          }
          /* polling interval for nonblocking execution.  */
          else if (strcmp (long_options[option_index].name, "nb-poll") == 0)
          {
          
          
            if (update_arg( (void *)&(args_info->nb_poll_arg), 
                 &(args_info->nb_poll_orig), &(args_info->nb_poll_given),
                &(local_args_info.nb_poll_given), optarg, 0, "0", ARG_INT,
                check_ambiguity, override, 0, 0,
                "nb-poll", '-',
                additional_error))
              goto failure;
          
          }
          /* select CPU to execute computation.  */
          else if (strcmp (long_options[option_index].name, "cpu") == 0)
          {
          
          
            if (update_arg( (void *)&(args_info->cpu_arg), 
                 &(args_info->cpu_orig), &(args_info->cpu_given),
                &(local_args_info.cpu_given), optarg, 0, "0", ARG_INT,
                check_ambiguity, override, 0, 0,
                "cpu", '-',
                additional_error))
              goto failure;
          
          }
          /* replaces dependencies with fixed computation (parameter represents computation time. If -1, does not replace dependencies.).  */
          else if (strcmp (long_options[option_index].name, "rpl-dep-cmp") == 0)
          {
          
          
            if (update_arg( (void *)&(args_info->rpl_dep_cmp_arg), 
                 &(args_info->rpl_dep_cmp_orig), &(args_info->rpl_dep_cmp_given),
                &(local_args_info.rpl_dep_cmp_given), optarg, 0, "-1", ARG_INT,
                check_ambiguity, override, 0, 0,
                "rpl-dep-cmp", '-',
                additional_error))
              goto failure;
          
          }
          /* In the alltoallv pattern, each chunk of data sent by each rank is of a random size. The size of the chunk with id 'root' is of size 'datasize'. All the other chunks are of random size, and a2av-skew-ratio times smaller..  */
          else if (strcmp (long_options[option_index].name, "a2av-skew-ratio") == 0)
          {
          
          
            if (update_arg( (void *)&(args_info->a2av_skew_ratio_arg), 
                 &(args_info->a2av_skew_ratio_orig), &(args_info->a2av_skew_ratio_given),
                &(local_args_info.a2av_skew_ratio_given), optarg, 0, "1", ARG_INT,
                check_ambiguity, override, 0, 0,
                "a2av-skew-ratio", '-',
                additional_error))
              goto failure;
          
          }
          /* Tracefile for rank 0 (others are autodetected).  */
          else if (strcmp (long_options[option_index].name, "traces") == 0)
          {
          
          
            if (update_arg( (void *)&(args_info->traces_arg), 
                 &(args_info->traces_orig), &(args_info->traces_given),
                &(local_args_info.traces_given), optarg, 0, 0, ARG_STRING,
                check_ambiguity, override, 0, 0,
                "traces", '-',
                additional_error))
              goto failure;
          
          }
          /* file with start lines in trace files (is updated after run if trace-nops is given).  */
          else if (strcmp (long_options[option_index].name, "traces-start") == 0)
          {
          
          
            if (update_arg( (void *)&(args_info->traces_start_arg), 
                 &(args_info->traces_start_orig), &(args_info->traces_start_given),
                &(local_args_info.traces_start_given), optarg, 0, 0, ARG_STRING,
                check_ambiguity, override, 0, 0,
                "traces-start", '-',
                additional_error))
              goto failure;
          
          }
          /* number of operations to write to file (0=all).  */
          else if (strcmp (long_options[option_index].name, "traces-nops") == 0)
          {
          
          
            if (update_arg( (void *)&(args_info->traces_nops_arg), 
                 &(args_info->traces_nops_orig), &(args_info->traces_nops_given),
                &(local_args_info.traces_nops_given), optarg, 0, "0", ARG_INT,
                check_ambiguity, override, 0, 0,
                "traces-nops", '-',
                additional_error))
              goto failure;
          
          }
          /* extrapolation factor for traces.  */
          else if (strcmp (long_options[option_index].name, "traces-extr") == 0)
          {
          
          
            if (update_arg( (void *)&(args_info->traces_extr_arg), 
                 &(args_info->traces_extr_orig), &(args_info->traces_extr_given),
                &(local_args_info.traces_extr_given), optarg, 0, "1", ARG_INT,
                check_ambiguity, override, 0, 0,
                "traces-extr", '-',
                additional_error))
              goto failure;
          
          }
          /* print each operation.  */
          else if (strcmp (long_options[option_index].name, "traces-print") == 0)
          {
          
          
            if (update_arg( (void *)&(args_info->traces_print_arg), 
                 &(args_info->traces_print_orig), &(args_info->traces_print_given),
                &(local_args_info.traces_print_given), optarg, 0, "0", ARG_INT,
                check_ambiguity, override, 0, 0,
                "traces-print", '-',
                additional_error))
              goto failure;
          
          }
          /* do not consider point-to-point communication.  */
          else if (strcmp (long_options[option_index].name, "traces-nop2p") == 0)
          {
          
          
            if (update_arg((void *)&(args_info->traces_nop2p_flag), 0, &(args_info->traces_nop2p_given),
                &(local_args_info.traces_nop2p_given), optarg, 0, 0, ARG_FLAG,
                check_ambiguity, override, 1, 0, "traces-nop2p", '-',
                additional_error))
              goto failure;
          
          }
          /* do not consider collective communication.  */
          else if (strcmp (long_options[option_index].name, "traces-nocolls") == 0)
          {
          
          
            if (update_arg((void *)&(args_info->traces_nocolls_flag), 0, &(args_info->traces_nocolls_given),
                &(local_args_info.traces_nocolls_given), optarg, 0, 0, ARG_FLAG,
                check_ambiguity, override, 1, 0, "traces-nocolls", '-',
                additional_error))
              goto failure;
          
          }
          /* turn blocking collectives into non-blocking colls, time to pre-post NBCs.  */
          else if (strcmp (long_options[option_index].name, "traces-nbcify") == 0)
          {
          
          
            if (update_arg( (void *)&(args_info->traces_nbcify_arg), 
                 &(args_info->traces_nbcify_orig), &(args_info->traces_nbcify_given),
                &(local_args_info.traces_nbcify_given), optarg, 0, "0", ARG_INT,
                check_ambiguity, override, 0, 0,
                "traces-nbcify", '-',
                additional_error))
              goto failure;
          
          }
          
          break;
        case '?':	/* Invalid option.  */
          /* `getopt_long' already printed an error message.  */
          goto failure;

        default:	/* bug: option not considered.  */
          fprintf (stderr, "%s: option unknown: %c%s\n", CMDLINE_PARSER_PACKAGE, c, (additional_error ? additional_error : ""));
          abort ();
        } /* switch */
    } /* while */



	FIX_UNUSED(check_required);

  cmdline_parser_release (&local_args_info);

  if ( error_occurred )
    return (EXIT_FAILURE);

  return 0;

failure:
  
  cmdline_parser_release (&local_args_info);
  return (EXIT_FAILURE);
}
/* vim: set ft=c noet ts=8 sts=8 sw=8 tw=80 nojs spell : */
