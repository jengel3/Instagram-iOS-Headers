/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:19:56 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGFeedPhotoViewDelegate.h>

@protocol IGEventViewerPhotoPlaybackControllerDelegate;
@class NSTimer, IGEventViewerTimerProxy, IGPost, IGEventViewerPhotoCell, IGEventViewerAnalyticsLogger, NSString;

@interface IGEventViewerPhotoPlaybackController : NSObject <IGFeedPhotoViewDelegate> {

	id<IGEventViewerPhotoPlaybackControllerDelegate> _delegate;
	NSTimer* _timer;
	IGEventViewerTimerProxy* _timerProxy;
	IGPost* _currentPost;
	IGEventViewerPhotoCell* _currentCell;
	IGEventViewerAnalyticsLogger* _logger;
	double _timerProgress;

}

@property (assign,nonatomic,__weak) id<IGEventViewerPhotoPlaybackControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) float currentProgress; 
@property (nonatomic,retain) NSTimer * timer;                                                               //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) IGEventViewerTimerProxy * timerProxy;                                          //@synthesize timerProxy=_timerProxy - In the implementation block
@property (assign,nonatomic) double timerProgress;                                                          //@synthesize timerProgress=_timerProgress - In the implementation block
@property (nonatomic,retain) IGPost * currentPost;                                                          //@synthesize currentPost=_currentPost - In the implementation block
@property (nonatomic,retain) IGEventViewerPhotoCell * currentCell;                                          //@synthesize currentCell=_currentCell - In the implementation block
@property (nonatomic,readonly) IGEventViewerAnalyticsLogger * logger;                                       //@synthesize logger=_logger - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didFireTimer:(id)arg1 ;
-(char)isCurrentlyPlayingPhoto;
-(double)timerProgress;
-(IGEventViewerPhotoCell *)currentCell;
-(void)setTimerProxy:(IGEventViewerTimerProxy *)arg1 ;
-(IGEventViewerTimerProxy *)timerProxy;
-(void)setTimerProgress:(double)arg1 ;
-(IGPost *)currentPost;
-(void)stopCurrentlyPlayingPhoto;
-(void)setCurrentPost:(IGPost *)arg1 ;
-(void)setCurrentCell:(IGEventViewerPhotoCell *)arg1 ;
-(void)feedPhotoViewDidLoadImage:(id)arg1 ;
-(void)feedPhotoDidDoubleTapToLike:(id)arg1 ;
-(id)initWithLogger:(id)arg1 ;
-(char)isValidPhotoPost:(id)arg1 photoCell:(id)arg2 ;
-(void)playPhotoForPost:(id)arg1 photoCell:(id)arg2 ;
-(void)stopTimer;
-(float)currentProgress;
-(void)dealloc;
-(void)setDelegate:(id<IGEventViewerPhotoPlaybackControllerDelegate>)arg1 ;
-(id<IGEventViewerPhotoPlaybackControllerDelegate>)delegate;
-(void)startTimer;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(IGEventViewerAnalyticsLogger *)logger;
@end

