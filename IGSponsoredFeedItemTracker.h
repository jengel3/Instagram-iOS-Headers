/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:10 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGFeedItemTracker.h>

@interface IGSponsoredFeedItemTracker : IGFeedItemTracker
-(void)trackSurveyWillAppearForSurveyQuestion:(id)arg1 ;
-(void)trackHideReasonSelectedForSurveyQuestion:(id)arg1 withAnswer:(id)arg2 ;
-(void)trackSurveyAnsweredForSurveyQuestion:(id)arg1 withAnswer:(id)arg2 ;
-(void)trackSurveyPrimerResponseForQuestion:(id)arg1 withResponse:(char)arg2 ;
-(void)trackBrandLiftSurveyWillAppearForSurvey:(id)arg1 ;
-(void)trackBrandLiftQuestion:(id)arg1 withAnswers:(id)arg2 forSurvey:(id)arg3 ;
-(void)trackBrandLiftSurveyPrimerResponseForSurvey:(id)arg1 withResponse:(char)arg2 ;
-(void)trackBrandLiftQuestionDidDismiss:(id)arg1 ;
-(void)trackInvalidationForFeedItem:(id)arg1 withReason:(id)arg2 ;
-(id)init;
@end

