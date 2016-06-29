

@interface IGInlineGalleryConfiguration : NSObject
+(void)updateLastInteractedTime;
+(char)longPressShortcutEnabled;
+(char)noBackoffEnabled;
+(int)backoffUnitInHours;
+(int)newMediaThreshold;
+(int)maxBackoffInDays;
+(int)maxDismissals;
+(id)lastInteractedTime;
+(int)intValueOf:(id)arg1 withDefault:(id)arg2 ;
+(id)debugSummaryString;
+(int)maxItemsToShow;
+(char)canAutoPromptInlineGallery:(id)arg1 ;
+(void)incrementDismissalCount;
+(int)consecutiveHardDismissals;
+(id)effectiveQEGroupName;
+(void)resetDismissalCount;
+(char)isEnabled;
@end

