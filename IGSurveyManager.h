

@class IGSurveyQuestion, IGBrandLiftSurvey, NSTimer;

@interface IGSurveyManager : NSObject {

	IGSurveyQuestion* _pendingSurveyQuestion;
	IGBrandLiftSurvey* _pendingBrandLiftSurvey;
	NSTimer* _activeSurveyTimer;
	double _timeAtStartup;

}
-(void)appLaunched:(id)arg1 ;
-(void)appForegrounded:(id)arg1 ;
-(void)appBackgrounded:(id)arg1 ;
-(void)mainFeedDidAppear:(id)arg1 ;
-(void)showSurveyWhenAppropriate:(id)arg1 ;
-(void)showBrandLiftSurveyWhenAppropriate:(id)arg1 ;
-(void)feedStartedInteracting:(id)arg1 ;
-(void)mainFeedEndedInteracting:(id)arg1 ;
-(void)invalidateTimerIfActive;
-(void)scheduleSurveyDisplayIfNeeded;
-(void)showPendingSurvey;
-(void)dealloc;
-(id)init;
@end

