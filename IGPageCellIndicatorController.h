

@protocol IGPageCellIndicatorControllerDelegate;
@class IGMediaOverlayIndicator;

@interface IGPageCellIndicatorController : NSObject {

	char _hasShownNUX;
	id<IGPageCellIndicatorControllerDelegate> _delegate;
	IGMediaOverlayIndicator* _indicatorView;

}

@property (assign,nonatomic,__weak) id<IGPageCellIndicatorControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) IGMediaOverlayIndicator * indicatorView;                       //@synthesize indicatorView=_indicatorView - In the implementation block
@property (assign,nonatomic) char hasShownNUX;                                                       //@synthesize hasShownNUX=_hasShownNUX - In the implementation block
-(id)initWithIndicatorView:(id)arg1 ;
-(void)didAppearOnScreenWithVideoView:(id)arg1 feedItem:(id)arg2 pageCellState:(id)arg3 percentVisible:(float)arg4 ;
-(void)didScrollToPageWithVideoView:(id)arg1 feedItem:(id)arg2 pageCellState:(id)arg3 ;
-(void)willDisplayOverlay;
-(void)didStartScrollingWithVideoView:(id)arg1 ;
-(void)setHasShownNUX:(char)arg1 ;
-(char)hasShownNUX;
-(void)showIndicatorWithVideoView:(id)arg1 feedItem:(id)arg2 pageCellState:(id)arg3 animated:(char)arg4 ;
-(void)hideIndicatorWithVideoView:(id)arg1 ;
-(void)showVideoIndicatorForVideoView:(id)arg1 animated:(char)arg2 ;
-(void)showPhotoIndicatorForFeedItem:(id)arg1 pageCellState:(id)arg2 animated:(char)arg3 ;
-(void)setDelegate:(id<IGPageCellIndicatorControllerDelegate>)arg1 ;
-(id<IGPageCellIndicatorControllerDelegate>)delegate;
-(void)reset;
-(IGMediaOverlayIndicator *)indicatorView;
@end

