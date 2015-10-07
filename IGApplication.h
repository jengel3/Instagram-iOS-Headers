/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:00 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIApplication.h>

@class IGAnalyticsManager, IGSurveyManager, IGFeedItemTrackingManager, IGMediaManager, IGNavigationEventManager, IGLocalNotificationManager, IGLoggedOutSessionManager, IGTypicalMetricsManager;

@interface IGApplication : UIApplication {

	int _touchState;
	IGAnalyticsManager* _analyticsManager;
	IGSurveyManager* _surveyManager;
	IGFeedItemTrackingManager* _feedItemTrackingManager;
	IGMediaManager* _mediaManager;
	IGNavigationEventManager* _navigationEventManager;
	IGLocalNotificationManager* _localNotificationManager;
	IGLoggedOutSessionManager* _loggedOutSessionManager;
	IGTypicalMetricsManager* _typicalMetricsManager;

}

@property (nonatomic,retain) IGAnalyticsManager * analyticsManager;                              //@synthesize analyticsManager=_analyticsManager - In the implementation block
@property (nonatomic,retain) IGSurveyManager * surveyManager;                                    //@synthesize surveyManager=_surveyManager - In the implementation block
@property (nonatomic,retain) IGFeedItemTrackingManager * feedItemTrackingManager;                //@synthesize feedItemTrackingManager=_feedItemTrackingManager - In the implementation block
@property (nonatomic,retain) IGMediaManager * mediaManager;                                      //@synthesize mediaManager=_mediaManager - In the implementation block
@property (nonatomic,retain) IGNavigationEventManager * navigationEventManager;                  //@synthesize navigationEventManager=_navigationEventManager - In the implementation block
@property (nonatomic,retain) IGLocalNotificationManager * localNotificationManager;              //@synthesize localNotificationManager=_localNotificationManager - In the implementation block
@property (nonatomic,retain) IGLoggedOutSessionManager * loggedOutSessionManager;                //@synthesize loggedOutSessionManager=_loggedOutSessionManager - In the implementation block
@property (nonatomic,retain) IGTypicalMetricsManager * typicalMetricsManager;                    //@synthesize typicalMetricsManager=_typicalMetricsManager - In the implementation block
-(void)initializeEventManagers;
-(void)setFeedItemTrackingManager:(IGFeedItemTrackingManager *)arg1 ;
-(void)setMediaManager:(IGMediaManager *)arg1 ;
-(void)setAnalyticsManager:(IGAnalyticsManager *)arg1 ;
-(void)setSurveyManager:(IGSurveyManager *)arg1 ;
-(void)setNavigationEventManager:(IGNavigationEventManager *)arg1 ;
-(void)setLocalNotificationManager:(IGLocalNotificationManager *)arg1 ;
-(void)setLoggedOutSessionManager:(IGLoggedOutSessionManager *)arg1 ;
-(void)setTypicalMetricsManager:(IGTypicalMetricsManager *)arg1 ;
-(void)processTouchEvent:(id)arg1 ;
-(void)handleTouch;
-(IGAnalyticsManager *)analyticsManager;
-(IGSurveyManager *)surveyManager;
-(IGFeedItemTrackingManager *)feedItemTrackingManager;
-(IGMediaManager *)mediaManager;
-(IGNavigationEventManager *)navigationEventManager;
-(IGLocalNotificationManager *)localNotificationManager;
-(IGLoggedOutSessionManager *)loggedOutSessionManager;
-(IGTypicalMetricsManager *)typicalMetricsManager;
-(id)init;
-(void)sendEvent:(id)arg1 ;
@end

