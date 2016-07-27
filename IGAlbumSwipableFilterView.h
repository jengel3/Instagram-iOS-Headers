
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGPanAnimationViewDelegate.h>

@class IGSurface, IGPostPipelineFilter, IGContext, IGFilterCollectionController, NSArray, IGPanAnimationView, IGAdjustController, UIImage, IGVideoComposition, IGVideoPlaybackView;

@interface IGAlbumSwipableFilterView : UIView <IGPanAnimationViewDelegate> {

	IGSurface* _outSurface;
	IGPostPipelineFilter* _postPipelineFilter;
	IGContext* _renderingContext;
	IGFilterCollectionController* _filterTrayController;
	NSArray* _filters;
	int _selectedFilterIndex;
	IGPanAnimationView* _panAnimationView;
	IGAdjustController* _adjustController;
	UIImage* _image;
	IGVideoComposition* _video;
	UIImage* _videoDisplayImage;
	IGVideoPlaybackView* _playerView;
	CGSize _filteredRenderSize;

}

@property (nonatomic,retain) IGSurface * outSurface;                                           //@synthesize outSurface=_outSurface - In the implementation block
@property (nonatomic,retain) IGPostPipelineFilter * postPipelineFilter;                        //@synthesize postPipelineFilter=_postPipelineFilter - In the implementation block
@property (nonatomic,retain) IGContext * renderingContext;                                     //@synthesize renderingContext=_renderingContext - In the implementation block
@property (nonatomic,retain) IGFilterCollectionController * filterTrayController;              //@synthesize filterTrayController=_filterTrayController - In the implementation block
@property (assign,nonatomic) CGSize filteredRenderSize;                                        //@synthesize filteredRenderSize=_filteredRenderSize - In the implementation block
@property (nonatomic,retain) NSArray * filters;                                                //@synthesize filters=_filters - In the implementation block
@property (assign,nonatomic) int selectedFilterIndex;                                          //@synthesize selectedFilterIndex=_selectedFilterIndex - In the implementation block
@property (nonatomic,retain) IGPanAnimationView * panAnimationView;                            //@synthesize panAnimationView=_panAnimationView - In the implementation block
@property (nonatomic,retain) IGAdjustController * adjustController;                            //@synthesize adjustController=_adjustController - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                  //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) IGVideoComposition * video;                                       //@synthesize video=_video - In the implementation block
@property (nonatomic,retain) UIImage * videoDisplayImage;                                      //@synthesize videoDisplayImage=_videoDisplayImage - In the implementation block
@property (nonatomic,retain) IGVideoPlaybackView * playerView;                                 //@synthesize playerView=_playerView - In the implementation block
-(id)initWithImage:(id)arg1 frame:(CGRect)arg2 ;
-(id)initWithVideo:(id)arg1 displayImage:(id)arg2 frame:(CGRect)arg3 ;
-(id)filteredImage;
-(Class)currentFilterClass;
-(id)filteredVideoDisplayImage;
-(void)setupPanAnimationView;
-(void)setFiltersForImage:(id)arg1 ;
-(void)setVideoDisplayImage:(UIImage *)arg1 ;
-(void)setPanAnimationView:(IGPanAnimationView *)arg1 ;
-(IGPanAnimationView *)panAnimationView;
-(CGSize)filteredRenderSize;
-(id)filteredImageFromPipelineUsingSize:(CGSize)arg1 ;
-(void)setFilteredRenderSize:(CGSize)arg1 ;
-(id)getSurfaceFromImage:(id)arg1 ;
-(UIImage *)videoDisplayImage;
-(void)setPlayerView:(IGVideoPlaybackView *)arg1 ;
-(void)panAnimationView:(id)arg1 didPanToRightBy:(float)arg2 ;
-(void)panAnimationView:(id)arg1 didPanToLeftBy:(float)arg2 ;
-(void)panAnimationView:(id)arg1 willFinishPanAnimationWithDuration:(float)arg2 ;
-(void)panAnimationViewDidFinishPanToRight:(id)arg1 ;
-(void)panAnimationViewDidFinish:(id)arg1 ;
-(void)panAnimationViewDidFinishPanToLeft:(id)arg1 ;
-(void)panAnimationView:(id)arg1 willCancelPanAnimationWithDuration:(float)arg2 ;
-(void)panAnimationViewDidUpdateCenterImage:(id)arg1 ;
-(void)setAdjustController:(IGAdjustController *)arg1 ;
-(void)setRenderingContext:(IGContext *)arg1 ;
-(void)setPostPipelineFilter:(IGPostPipelineFilter *)arg1 ;
-(int)selectedFilterIndex;
-(void)setSelectedFilterIndex:(int)arg1 ;
-(void)setOutSurface:(IGSurface *)arg1 ;
-(int)filterIndexForIndexOffset:(int)arg1 ;
-(id)imageFromFilterIndex:(unsigned)arg1 ;
-(IGSurface *)outSurface;
-(IGPostPipelineFilter *)postPipelineFilter;
-(void)setupFilters;
-(IGAdjustController *)adjustController;
-(void)resetFilter;
-(IGContext *)renderingContext;
-(char)currentMediaIsFiltered;
-(IGFilterCollectionController *)filterTrayController;
-(void)setFilterTrayController:(IGFilterCollectionController *)arg1 ;
-(IGVideoPlaybackView *)playerView;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(void)setFilters:(NSArray *)arg1 ;
-(NSArray *)filters;
-(IGVideoComposition *)video;
-(void)setVideo:(IGVideoComposition *)arg1 ;
@end

