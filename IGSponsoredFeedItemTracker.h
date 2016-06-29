
#import <Instagram/IGFeedItemTracker.h>

@interface IGSponsoredFeedItemTracker : IGFeedItemTracker
+(void)reportEvent:(id)arg1 immediately:(char)arg2 ;
-(void)trackHideReasonForTrackingToken:(id)arg1 withReason:(id)arg2 withExtraDictionary:(id)arg3 ;
-(void)addEntriesForEvent:(id)arg1 trackingToken:(id)arg2 reason:(id)arg3 extra:(id)arg4 ;
-(void)trackInvalidationForFeedItem:(id)arg1 withReason:(id)arg2 extra:(id)arg3 ;
-(void)trackSurveyWillAppearForSurveyQuestion:(id)arg1 ;
-(void)trackSurveyPrimerResponseForQuestion:(id)arg1 withResponse:(char)arg2 ;
-(void)trackBrandLiftSurveyPrimerResponseForSurvey:(id)arg1 withResponse:(char)arg2 ;
-(void)trackBrandLiftQuestionDidDismiss:(id)arg1 ;
-(void)trackHideReasonSelectedForSurveyQuestion:(id)arg1 withAnswer:(id)arg2 withExtraDictionary:(id)arg3 ;
-(void)trackHideReasonForFeedItem:(id)arg1 withReason:(id)arg2 withExtraDictionary:(id)arg3 ;
-(void)trackSurveyAnsweredForSurveyQuestion:(id)arg1 withAnswer:(id)arg2 ;
-(void)trackBrandLiftSurveyWillAppearForSurvey:(id)arg1 ;
-(void)trackBrandLiftQuestion:(id)arg1 withAnswers:(id)arg2 forSurvey:(id)arg3 ;
-(id)init;
@end

