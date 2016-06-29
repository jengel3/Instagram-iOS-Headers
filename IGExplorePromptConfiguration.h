

@interface IGExplorePromptConfiguration : NSObject
+(int)getIntegerValueForParam:(id)arg1 ;
+(int)timeToPrefetchExploreV2;
+(int)timeToPrefetchExploreV3;
+(int)numberOfPostBeforePrompt;
+(double)timeToFadeOut;
+(double)intervalBetweenImpressions;
+(int)maxImpressionForPrompt;
+(double)timeIntervalToDisplayPrompt;
+(char)shouldShowRedDotOnly;
+(char)allowPrompt;
@end

