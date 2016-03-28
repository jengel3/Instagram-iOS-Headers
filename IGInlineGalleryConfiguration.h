

@interface IGInlineGalleryConfiguration : NSObject
+(void)updateLastInteractedTime;
+(id)effectiveQEGroupName;
+(char)longPressShortcutEnabled;
+(char)noBackoffEnabled;
+(int)backoffUnitInHours;
+(int)newMediaThreshold;
+(int)maxBackoffInDays;
+(int)maxDismissals;
+(int)consecutiveHardDismissals;
+(id)lastInteractedTime;
+(int)intValueOf:(id)arg1 withDefault:(id)arg2 ;
+(id)debugSummaryString;
+(void)incrementDismissalCount;
+(void)resetDismissalCount;
+(char)canAutoPromptInlineGallery:(id)arg1 ;
+(int)maxItemsToShow;
+(char)isEnabled;
@end

