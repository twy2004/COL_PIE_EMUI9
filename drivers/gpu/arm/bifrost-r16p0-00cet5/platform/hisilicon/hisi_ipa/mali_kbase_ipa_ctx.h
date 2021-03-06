/*
 *
 * (C) COPYRIGHT 2015 ARM Limited. All rights reserved.
 *
 * This program is free software and is provided to you under the terms of the
 * GNU General Public License version 2 as published by the Free Software
 * Foundation, and any use by you of this program is subject to the terms
 * of such GNU licence.
 *
 * A copy of the licence is included with the program, and can also be obtained
 * from Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA  02110-1301, USA.
 *
 */



struct kbase_ipa_context;

/**
 * kbase_dynipa_init - initialize the kbase ipa core
 * @kbdev:      kbase device
 *
 * Return:      pointer to the IPA context or NULL on failure
 */
struct kbase_ipa_context *kbase_dynipa_init(struct kbase_device *kbdev);

/**
 * kbase_dynipa_term - terminate the kbase ipa core
 * @ctx:        pointer to the IPA context
 */
void kbase_dynipa_term(struct kbase_ipa_context *ctx);

/**
 * kbase_ipa_dynamic_core_power - calculate power
 * @ctx:        pointer to the IPA context
 * @err:        0 on success, negative on failure
 *
 * Return:      returns power consumption as mw @ 1GHz @ 1V
 */
u32 kbase_ipa_dynamic_core_power(struct kbase_ipa_context *ctx, int *err);

/**
 * kbase_ipa_dynamic_bound_measure - calculate bound measure
 * @ctx:        pointer to the IPA context
 * @err:        0 on success, negative on failure
 *
 * Return:      returns GPU bound measurement value
 */
u32 kbase_ipa_dynamic_bound_measure(struct kbase_ipa_context *ctx, int *err);

/**
 * kbase_ipa_dynamic_bound_detect - detect GPU bound event
 * @ctx:        pointer to the IPA context
 * @err:        0 on success, negative on failure
 *
 * Return:      returns GPU bound event is true or false
 */
bool kbase_ipa_dynamic_bound_detect(struct kbase_ipa_context *ctx, int *err,
	unsigned long cur_freq, unsigned long load, bool ipa_enable);


