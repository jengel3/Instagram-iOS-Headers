/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:12 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGVideoInfo, UIView, NSMutableArray, UIImageView, CADisplayLink;

@interface IGLegacyVideoProgressView : UIView {

	char _lastClipIsSelected;
	char _videoRecordingEnabled;
	char _isLive;
	char _shouldExpandLastClipToFillAllWidth;
	/*^block*/id _progressBlock;
	IGVideoInfo* _videoInfo;
	UIView* _minDurationView;
	NSMutableArray* _clipBarViews;
	UIImageView* _runningTimeBarView;
	UIView* _blinkerView;
	CADisplayLink* _displayLink;
	int _counter;

}

@property (nonatomic,copy) id progressBlock;                                       //@synthesize progressBlock=_progressBlock - In the implementation block
@property (assign,nonatomic) char lastClipIsSelected;                              //@synthesize lastClipIsSelected=_lastClipIsSelected - In the implementation block
@property (assign,nonatomic) char videoRecordingEnabled;                           //@synthesize videoRecordingEnabled=_videoRecordingEnabled - In the implementation block
@property (assign,nonatomic) char isLive;                                          //@synthesize isLive=_isLive - In the implementation block
@property (assign,nonatomic) char shouldExpandLastClipToFillAllWidth;              //@synthesize shouldExpandLastClipToFillAllWidth=_shouldExpandLastClipToFillAllWidth - In the implementation block
@property (nonatomic,retain) IGVideoInfo * videoInfo;                              //@synthesize videoInfo=_videoInfo - In the implementation block
@property (nonatomic,retain) UIView * minDurationView;                             //@synthesize minDurationView=_minDurationView - In the implementation block
@property (nonatomic,retain) NSMutableArray * clipBarViews;                        //@synthesize clipBarViews=_clipBarViews - In the implementation block
@property (nonatomic,retain) UIImageView * runningTimeBarView;                     //@synthesize runningTimeBarView=_runningTimeBarView - In the implementation block
@property (nonatomic,retain) UIView * blinkerView;                                 //@synthesize blinkerView=_blinkerView - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                          //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) int counter;                                          //@synthesize counter=_counter - In the implementation block
-(char)videoRecordingEnabled;
-(void)setVideoRecordingEnabled:(char)arg1 ;
-(void)setIsLive:(char)arg1 ;
-(void)onClipAdded:(id)arg1 ;
-(IGVideoInfo *)videoInfo;
-(id)initWithVideoInfo:(id)arg1 ;
-(char)lastClipIsSelected;
-(void)setLastClipIsSelected:(char)arg1 ;
-(void)removeLastClip;
-(void)addClip:(id)arg1 ;
-(void)setShouldExpandLastClipToFillAllWidth:(char)arg1 ;
-(CGPoint)blinkerCenter;
-(void)setVideoInfo:(IGVideoInfo *)arg1 ;
-(UIView *)minDurationView;
-(void)reloadAllClips;
-(id)barImageOfType:(int)arg1 ;
-(UIView *)blinkerView;
-(void)onDisplayLinkDidFire:(id)arg1 ;
-(UIImageView *)runningTimeBarView;
-(void)setRunningTime:(float)arg1 ;
-(void)updateBlinker;
-(NSMutableArray *)clipBarViews;
-(char)shouldExpandLastClipToFillAllWidth;
-(void)setMinDurationView:(UIView *)arg1 ;
-(void)setClipBarViews:(NSMutableArray *)arg1 ;
-(void)setRunningTimeBarView:(UIImageView *)arg1 ;
-(void)setBlinkerView:(UIView *)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(CADisplayLink *)displayLink;
-(int)counter;
-(void)setCounter:(int)arg1 ;
-(char)isLive;
-(id)progressBlock;
-(void)setProgressBlock:(id)arg1 ;
@end

