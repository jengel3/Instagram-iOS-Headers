/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:19:57 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGFeedVideoPlayerPlaybackDelegate.h>
#import <Instagram/IGFeedItemVideoViewDelegate.h>

@protocol IGEventViewerVideoPlaybackControllerDelegate;
@class IGFeedVideoManager, IGVideoProxy, NSMutableSet, IGPost, IGEventViewerVideoCell, IGFeedVideoPlayer, IGEventViewerAnalyticsLogger, NSString;

@interface IGEventViewerVideoPlaybackController : NSObject <IGFeedVideoPlayerPlaybackDelegate, IGFeedItemVideoViewDelegate> {

	char _currentVideoDidPlayToEnd;
	id<IGEventViewerVideoPlaybackControllerDelegate> _delegate;
	IGFeedVideoManager* _feedVideoManager;
	IGVideoProxy* _videoProxy;
	NSMutableSet* _prebufferedURLs;
	IGPost* _currentPost;
	IGEventViewerVideoCell* _currentCell;
	IGFeedVideoPlayer* _currentPlayer;
	IGEventViewerAnalyticsLogger* _logger;

}

@property (assign,nonatomic,__weak) id<IGEventViewerVideoPlaybackControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) float currentProgress; 
@property (nonatomic,readonly) IGFeedVideoManager * feedVideoManager;                                       //@synthesize feedVideoManager=_feedVideoManager - In the implementation block
@property (nonatomic,readonly) IGVideoProxy * videoProxy;                                                   //@synthesize videoProxy=_videoProxy - In the implementation block
@property (nonatomic,readonly) NSMutableSet * prebufferedURLs;                                              //@synthesize prebufferedURLs=_prebufferedURLs - In the implementation block
@property (nonatomic,retain) IGPost * currentPost;                                                          //@synthesize currentPost=_currentPost - In the implementation block
@property (nonatomic,retain) IGEventViewerVideoCell * currentCell;                                          //@synthesize currentCell=_currentCell - In the implementation block
@property (nonatomic,retain) IGFeedVideoPlayer * currentPlayer;                                             //@synthesize currentPlayer=_currentPlayer - In the implementation block
@property (assign,nonatomic) char currentVideoDidPlayToEnd;                                                 //@synthesize currentVideoDidPlayToEnd=_currentVideoDidPlayToEnd - In the implementation block
@property (nonatomic,readonly) IGEventViewerAnalyticsLogger * logger;                                       //@synthesize logger=_logger - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)videoPlayerDidPlayToEnd:(id)arg1 ;
-(IGVideoProxy *)videoProxy;
-(IGEventViewerVideoCell *)currentCell;
-(IGPost *)currentPost;
-(void)setCurrentPost:(IGPost *)arg1 ;
-(void)setCurrentCell:(IGEventViewerVideoCell *)arg1 ;
-(id)initWithLogger:(id)arg1 ;
-(id)initWithFeedVideoManager:(id)arg1 videoProxy:(id)arg2 logger:(id)arg3 ;
-(char)isCurrentlyPlayingVideo;
-(void)stopCurrentlyPlayingVideo;
-(void)prepareToReusePlayer:(id)arg1 ;
-(IGFeedVideoManager *)feedVideoManager;
-(char)currentVideoDidPlayToEnd;
-(void)setCurrentVideoDidPlayToEnd:(char)arg1 ;
-(void)videoPlayerDidStartPlaying:(id)arg1 ;
-(void)videoPlayer:(id)arg1 didUpdateProgress:(float)arg2 ;
-(void)videoPlayer:(id)arg1 didFailWithError:(id)arg2 ;
-(void)feedItemVideoViewDidRequestVideoPlayback:(id)arg1 ;
-(void)feedItemVideoView:(id)arg1 didFailToPlayWithError:(id)arg2 ;
-(void)feedItemVideoViewDidDoubleTapToLike:(id)arg1 ;
-(id)feedItemVideoViewCurrentIGAnalyticsMetadata:(id)arg1 ;
-(int)feedItemVideoViewPosition:(id)arg1 ;
-(void)feedItemVideoViewDidLoadImage:(id)arg1 ;
-(void)feedItemVideoViewDidPlayToEnd:(id)arg1 ;
-(void)feedItemVideoViewDidLongPress:(id)arg1 ;
-(char)isValidVideoPost:(id)arg1 videoCell:(id)arg2 ;
-(void)playVideoForPost:(id)arg1 videoCell:(id)arg2 ;
-(NSMutableSet *)prebufferedURLs;
-(float)currentProgress;
-(void)setDelegate:(id<IGEventViewerVideoPlaybackControllerDelegate>)arg1 ;
-(id<IGEventViewerVideoPlaybackControllerDelegate>)delegate;
-(IGFeedVideoPlayer *)currentPlayer;
-(void)setCurrentPlayer:(IGFeedVideoPlayer *)arg1 ;
-(IGEventViewerAnalyticsLogger *)logger;
@end

