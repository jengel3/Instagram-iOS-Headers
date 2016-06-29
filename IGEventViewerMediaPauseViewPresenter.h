

@protocol IGEventViewerCellType, IGEventViewerMediaContextViewDelegate;
@class IGFeedItemMediaCell, UIView;

@interface IGEventViewerMediaPauseViewPresenter : NSObject {

	IGFeedItemMediaCell*<IGEventViewerCellType> _mediaCell;
	UIView* _pauseView;
	id<IGEventViewerMediaContextViewDelegate> _contextViewDelegate;

}

@property (assign,nonatomic,__weak) IGFeedItemMediaCell*<IGEventViewerCellType> mediaCell;                      //@synthesize mediaCell=_mediaCell - In the implementation block
@property (nonatomic,retain) UIView * pauseView;                                                                //@synthesize pauseView=_pauseView - In the implementation block
@property (assign,nonatomic,__weak) id<IGEventViewerMediaContextViewDelegate> contextViewDelegate;              //@synthesize contextViewDelegate=_contextViewDelegate - In the implementation block
@property (nonatomic,readonly) char isPauseViewPresented; 
-(UIView *)pauseView;
-(char)isPauseViewPresented;
-(id)setUpPauseViewWithMediaCell:(id)arg1 feedItem:(id)arg2 ;
-(void)setPauseView:(UIView *)arg1 ;
-(void)setMediaCell:(IGFeedItemMediaCell*<IGEventViewerCellType>)arg1 ;
-(id)styledStringForFeedItem:(id)arg1 width:(float)arg2 ;
-(id<IGEventViewerMediaContextViewDelegate>)contextViewDelegate;
-(id)initWithContextViewDelegate:(id)arg1 ;
-(void)showInMediaCell:(id)arg1 feedItem:(id)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)updateLikeButtonInContextView:(id)arg1 feedItem:(id)arg2 animated:(char)arg3 ;
-(void)cancelImageLoadingForBlurringView;
-(IGFeedItemMediaCell*<IGEventViewerCellType>)mediaCell;
-(void)setContextViewDelegate:(id<IGEventViewerMediaContextViewDelegate>)arg1 ;
-(void)dismissAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
@end

