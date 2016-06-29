
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <Instagram/IGAssetPlayerViewDelegate.h>
#import <Instagram/IGCropViewUserInteractionDelegate.h>
#import <Instagram/IGPanAnimationViewDelegate.h>

@class IGAssetPlayerView, UIImageView, UIView, IGCropView, IGCameraGuideView, IGCircularProgressView, IGSurface, IGPostPipelineFilter, IGContext, IGFilterCollectionController, NSArray, IGPanAnimationView, IGAdjustController, UIImage, NSString;

@interface IGAlbumCameraPreviewViewController : UIViewController <IGAssetPlayerViewDelegate, IGCropViewUserInteractionDelegate, IGPanAnimationViewDelegate> {

	IGAssetPlayerView* _playerView;
	UIImageView* _loadingThumbnailView;
	UIView* _cropBackground;
	IGCropView* _cropView;
	IGCameraGuideView* _guideView;
	UIImageView* _videoCoverFrameImageView;
	IGCircularProgressView* _progressView;
	UIView* _loadingOverlayView;
	IGSurface* _outSurface;
	IGPostPipelineFilter* _postPipelineFilter;
	IGContext* _renderingContext;
	IGFilterCollectionController* _filterTrayController;
	NSArray* _filters;
	int _selectedFilterIndex;
	IGPanAnimationView* _filterableDisplayView;
	IGAdjustController* _adjustController;
	CGSize _filteredRenderSize;

}

@property (nonatomic,retain) UIView * cropBackground;                                          //@synthesize cropBackground=_cropBackground - In the implementation block
@property (nonatomic,retain) IGCropView * cropView;                                            //@synthesize cropView=_cropView - In the implementation block
@property (nonatomic,retain) IGCameraGuideView * guideView;                                    //@synthesize guideView=_guideView - In the implementation block
@property (nonatomic,retain) UIImageView * videoCoverFrameImageView;                           //@synthesize videoCoverFrameImageView=_videoCoverFrameImageView - In the implementation block
@property (nonatomic,retain) IGCircularProgressView * progressView;                            //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UIView * loadingOverlayView;                                      //@synthesize loadingOverlayView=_loadingOverlayView - In the implementation block
@property (nonatomic,retain) IGSurface * outSurface;                                           //@synthesize outSurface=_outSurface - In the implementation block
@property (nonatomic,retain) IGPostPipelineFilter * postPipelineFilter;                        //@synthesize postPipelineFilter=_postPipelineFilter - In the implementation block
@property (nonatomic,retain) IGContext * renderingContext;                                     //@synthesize renderingContext=_renderingContext - In the implementation block
@property (nonatomic,retain) IGFilterCollectionController * filterTrayController;              //@synthesize filterTrayController=_filterTrayController - In the implementation block
@property (assign,nonatomic) CGSize filteredRenderSize;                                        //@synthesize filteredRenderSize=_filteredRenderSize - In the implementation block
@property (nonatomic,retain) NSArray * filters;                                                //@synthesize filters=_filters - In the implementation block
@property (assign,nonatomic) int selectedFilterIndex;                                          //@synthesize selectedFilterIndex=_selectedFilterIndex - In the implementation block
@property (nonatomic,retain) IGPanAnimationView * filterableDisplayView;                       //@synthesize filterableDisplayView=_filterableDisplayView - In the implementation block
@property (nonatomic,retain) IGAdjustController * adjustController;                            //@synthesize adjustController=_adjustController - In the implementation block
@property (nonatomic,retain) IGAssetPlayerView * playerView;                                   //@synthesize playerView=_playerView - In the implementation block
@property (nonatomic,retain) UIImageView * loadingThumbnailView;                               //@synthesize loadingThumbnailView=_loadingThumbnailView - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCropBackground:(UIView *)arg1 ;
-(UIView *)cropBackground;
-(void)setImageForFilters:(id)arg1 ;
-(CGSize)filteredRenderSize;
-(id)filteredImageFromPipelineUsingSize:(CGSize)arg1 ;
-(void)setFilteredRenderSize:(CGSize)arg1 ;
-(id)getSurfaceFromImage:(id)arg1 ;
-(void)stopVideoPlayer;
-(char)currentImageIsFiltered;
-(id)filteredImage;
-(void)hideLoadingViews;
-(void)setLoadingThumbnailImage:(id)arg1 ;
-(void)setPlayerView:(IGAssetPlayerView *)arg1 ;
-(UIView *)loadingOverlayView;
-(void)cropViewUserInteractionDidBegin:(id)arg1 ;
-(void)cropViewUserInteractionDidEnd:(id)arg1 ;
-(void)setCropView:(IGCropView *)arg1 ;
-(IGCropView *)cropView;
-(void)setGuideView:(IGCameraGuideView *)arg1 ;
-(IGCameraGuideView *)guideView;
-(void)setVideoCoverFrameImageView:(UIImageView *)arg1 ;
-(UIImageView *)videoCoverFrameImageView;
-(void)setLoadingThumbnailView:(UIImageView *)arg1 ;
-(UIImageView *)loadingThumbnailView;
-(void)setLoadingOverlayView:(UIView *)arg1 ;
-(void)assetPlayerViewAssetLoaded:(id)arg1 ;
-(void)assetPlayerViewPlayStateDidChange:(id)arg1 ;
-(void)assetPlayerView:(id)arg1 didPlayToTime:(SCD_Struct_IG77)arg2 ;
-(void)panAnimationView:(id)arg1 didPanToRightBy:(float)arg2 ;
-(void)panAnimationView:(id)arg1 didPanToLeftBy:(float)arg2 ;
-(void)panAnimationView:(id)arg1 willFinishPanAnimationWithDuration:(float)arg2 ;
-(void)panAnimationViewDidFinishPanToRight:(id)arg1 ;
-(void)panAnimationViewDidFinishPanToLeft:(id)arg1 ;
-(void)panAnimationView:(id)arg1 willCancelPanAnimationWithDuration:(float)arg2 ;
-(void)panAnimationViewDidUpdateCenterImage:(id)arg1 ;
-(void)setAdjustController:(IGAdjustController *)arg1 ;
-(void)setFilterableDisplayView:(IGPanAnimationView *)arg1 ;
-(IGPanAnimationView *)filterableDisplayView;
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
-(IGFilterCollectionController *)filterTrayController;
-(void)setFilterTrayController:(IGFilterCollectionController *)arg1 ;
-(IGAssetPlayerView *)playerView;
-(CGRect)cropRect;
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(void)reset;
-(UIImage *)image;
-(void)setFilters:(NSArray *)arg1 ;
-(NSArray *)filters;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)setProgressView:(IGCircularProgressView *)arg1 ;
-(IGCircularProgressView *)progressView;
-(void)setVideoPreviewImage:(id)arg1 ;
-(void)setPreviewImage:(id)arg1 ;
-(void)setVideo:(id)arg1 ;
-(void)setLoadingProgress:(float)arg1 ;
@end

