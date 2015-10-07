/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:12 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGVideoScrubberViewDelegate;
@class IGSurfaceView, UIView, NSArray, UILabel;

@interface IGVideoScrubberView : UIView {

	CGSize _videoSize;
	IGSurfaceView* _centerHandleImageView;
	float _keyPosition;
	id<IGVideoScrubberViewDelegate> _delegate;
	UIView* _frameViewsContainer;
	UIView* _overlayView;
	UIView* _centerHandle;
	NSArray* _frameViews;
	UILabel* _instructionLabel;

}

@property (nonatomic,retain) IGSurfaceView * centerHandleImageView;                        //@synthesize centerHandleImageView=_centerHandleImageView - In the implementation block
@property (assign,nonatomic) float keyPosition;                                            //@synthesize keyPosition=_keyPosition - In the implementation block
@property (assign,nonatomic,__weak) id<IGVideoScrubberViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * frameViewsContainer;                                 //@synthesize frameViewsContainer=_frameViewsContainer - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                         //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) UIView * centerHandle;                                        //@synthesize centerHandle=_centerHandle - In the implementation block
@property (nonatomic,retain) NSArray * frameViews;                                         //@synthesize frameViews=_frameViews - In the implementation block
@property (nonatomic,retain) UILabel * instructionLabel;                                   //@synthesize instructionLabel=_instructionLabel - In the implementation block
-(void)onPan:(id)arg1 ;
-(UILabel *)instructionLabel;
-(void)setInstructionLabel:(UILabel *)arg1 ;
-(float)keyPosition;
-(void)onTap;
-(void)setThumbnail:(id)arg1 forIndex:(unsigned)arg2 ;
-(void)setKeyPosition:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 videoSize:(CGSize)arg2 ;
-(IGSurfaceView *)centerHandleImageView;
-(UIView *)frameViewsContainer;
-(UIView *)centerHandle;
-(int)xForPosition:(float)arg1 ;
-(void)onThumbnailStripTapped:(id)arg1 ;
-(NSArray *)frameViews;
-(void)handleMoveToCenterHandleX:(int)arg1 ;
-(int)scrubPadding;
-(int)scrubbableWidth;
-(float)positionForX:(float)arg1 ;
-(void)setCenterHandleImageView:(IGSurfaceView *)arg1 ;
-(void)setFrameViewsContainer:(UIView *)arg1 ;
-(void)setCenterHandle:(UIView *)arg1 ;
-(void)setFrameViews:(NSArray *)arg1 ;
-(UIView *)overlayView;
-(void)setDelegate:(id<IGVideoScrubberViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGVideoScrubberViewDelegate>)delegate;
-(void)setOverlayView:(UIView *)arg1 ;
@end

