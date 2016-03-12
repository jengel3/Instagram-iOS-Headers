
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGVideoScrubberViewDelegate;
@class IGSurfaceView, UIView, NSMutableArray, UILabel;

@interface IGVideoScrubberView : UIView {

	CGSize _videoSize;
	IGSurfaceView* _centerHandleImageView;
	float _keyPosition;
	id<IGVideoScrubberViewDelegate> _delegate;
	UIView* _frameViewsContainer;
	UIView* _overlayView;
	UIView* _centerHandle;
	NSMutableArray* _frameViews;
	UILabel* _instructionLabel;

}

@property (nonatomic,retain) IGSurfaceView * centerHandleImageView;                        //@synthesize centerHandleImageView=_centerHandleImageView - In the implementation block
@property (assign,nonatomic) float keyPosition;                                            //@synthesize keyPosition=_keyPosition - In the implementation block
@property (assign,nonatomic,__weak) id<IGVideoScrubberViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * frameViewsContainer;                                 //@synthesize frameViewsContainer=_frameViewsContainer - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                         //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) UIView * centerHandle;                                        //@synthesize centerHandle=_centerHandle - In the implementation block
@property (nonatomic,retain) NSMutableArray * frameViews;                                  //@synthesize frameViews=_frameViews - In the implementation block
@property (nonatomic,retain) UILabel * instructionLabel;                                   //@synthesize instructionLabel=_instructionLabel - In the implementation block
-(void)onPan:(id)arg1 ;
-(void)setInstructionLabel:(UILabel *)arg1 ;
-(float)keyPosition;
-(void)setThumbnail:(id)arg1 forIndex:(unsigned)arg2 ;
-(void)setKeyPosition:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 videoSize:(CGSize)arg2 ;
-(IGSurfaceView *)centerHandleImageView;
-(void)configureFramesContainer;
-(void)configureFrameThumbnailViews;
-(void)configureOverlayView;
-(void)configureCenterHandle;
-(void)configureInstructionLabel;
-(UIView *)frameViewsContainer;
-(void)updateFrameRects;
-(int)xForPosition:(float)arg1 ;
-(UIView *)centerHandle;
-(void)onThumbnailStripTapped:(id)arg1 ;
-(NSMutableArray *)frameViews;
-(void)handleMoveToCenterHandleX:(int)arg1 ;
-(int)scrubPadding;
-(int)scrubbableWidth;
-(float)positionForX:(float)arg1 ;
-(void)setCenterHandleImageView:(IGSurfaceView *)arg1 ;
-(void)setFrameViewsContainer:(UIView *)arg1 ;
-(void)setCenterHandle:(UIView *)arg1 ;
-(void)setFrameViews:(NSMutableArray *)arg1 ;
-(UILabel *)instructionLabel;
-(void)setDelegate:(id<IGVideoScrubberViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGVideoScrubberViewDelegate>)delegate;
-(void)onTap;
-(void)setOverlayView:(UIView *)arg1 ;
-(UIView *)overlayView;
@end

