/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:39 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGFeedVideoPlayerDelegate.h>

@protocol IGAlbumPlayerViewVideoViewDelegate;
@class IGFeedVideoManager, IGFeedVideoPlayer, UIView, IGImageProgressView, NSString;

@interface IGAlbumPlayerViewVideoView : UIView <IGFeedVideoPlayerDelegate> {

	IGFeedVideoManager* _feedVideoManager;
	IGFeedVideoPlayer* _videoPlayer;
	UIView* _videoPlayerView;
	IGImageProgressView* _photoView;
	id<IGAlbumPlayerViewVideoViewDelegate> _delegate;

}

@property (nonatomic,readonly) IGFeedVideoManager * feedVideoManager;                               //@synthesize feedVideoManager=_feedVideoManager - In the implementation block
@property (nonatomic,retain) IGFeedVideoPlayer * videoPlayer;                                       //@synthesize videoPlayer=_videoPlayer - In the implementation block
@property (nonatomic,retain) UIView * videoPlayerView;                                              //@synthesize videoPlayerView=_videoPlayerView - In the implementation block
@property (nonatomic,readonly) IGImageProgressView * photoView;                                     //@synthesize photoView=_photoView - In the implementation block
@property (nonatomic,__weak,readonly) id<IGAlbumPlayerViewVideoViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)videoPlayerView;
-(void)setVideoPlayerView:(UIView *)arg1 ;
-(IGFeedVideoManager *)feedVideoManager;
-(void)videoPlayer:(id)arg1 didLoadVideoInView:(id)arg2 ;
-(void)videoPlayerLoadedFirstFrame:(id)arg1 ;
-(void)videoPlayerDidPlayToEnd:(id)arg1 ;
-(void)videoPlayerWillPrepareAssetForPlayback:(id)arg1 ;
-(void)videoPlayer:(id)arg1 playbackBufferEmpty:(char)arg2 ;
-(void)videoPlayer:(id)arg1 playbackBufferLikelyToKeepUp:(char)arg2 ;
-(void)videoPlayer:(id)arg1 didFailToPlaybackWithError:(id)arg2 ;
-(void)videoPlayerDidPlay:(id)arg1 ;
-(void)videoPlayer:(id)arg1 didUpdateLoadingProgress:(float)arg2 ;
-(void)videoPlayer:(id)arg1 didUpdatePlaybackProgress:(float)arg2 ;
-(void)videoPlayerDidFinishSeeking:(id)arg1 ;
-(void)configureWithVideo:(id)arg1 coverPhoto:(id)arg2 config:(id)arg3 delegate:(id)arg4 ;
-(IGFeedVideoPlayer *)videoPlayer;
-(void)play;
-(IGImageProgressView *)photoView;
-(void)setVideoPlayer:(IGFeedVideoPlayer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<IGAlbumPlayerViewVideoViewDelegate>)delegate;
-(void)prepareForReuse;
-(void)pause;
@end
