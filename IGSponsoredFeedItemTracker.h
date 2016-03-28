
#import <Instagram/IGFeedItemTracker.h>

@interface IGSponsoredFeedItemTracker : IGFeedItemTracker
-(void)trackSurveyWillAppearForSurveyQuestion:(id)arg1 ;
-(void)trackHideReasonSelectedForSurveyQuestion:(id)arg1 withAnswer:(id)arg2 withExtraDictionary:(id)arg3 ;
-(void)trackHideReasonForFeedItem:(id)arg1 withReason:(id)arg2 withExtraDictionary:(id)arg3 ;
-(void)trackSurveyAnsweredForSurveyQuestion:(id)arg1 withAnswer:(id)arg2 ;
-(void)trackSurveyPrimerResponseForQuestion:(id)arg1 withResponse:(char)arg2 ;
-(void)trackBrandLiftSurveyWillAppearForSurvey:(id)arg1 ;
-(void)trackBrandLiftQuestion:(id)arg1 withAnswers:(id)arg2 forSurvey:(id)arg3 ;
-(void)trackBrandLiftSurveyPrimerResponseForSurvey:(id)arg1 withResponse:(char)arg2 ;
-(void)trackBrandLiftQuestionDidDismiss:(id)arg1 ;
-(id)trackInvalidationForFeedItem:(id)arg1 withReason:(id)arg2 ;
-(void)trackHideReasonForTrackingToken:(id)arg1 withReason:(id)arg2 withExtraDictionary:(id)arg3 ;
-(id)init;
@end

