
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class NSCache, NSMutableArray, AVAsset, AVAssetImageGenerator, NSMutableIndexSet;

@interface IGFilmStripView : UIView {

	NSCache* _thumbnailCache;
	char _generatingThumbnails;
	char _thumbnailsNeedLayout;
	int _firstTumbnailTime;
	CGAffineTransform _trackTransform;
	NSMutableArray* _thumbnailImageViews;
	AVAsset* _asset;
	AVAssetImageGenerator* _imageGenerator;
	NSMutableIndexSet* _loadedImagesSet;
	CGSize _thumbnailSize;

}

@property (nonatomic,retain) AVAssetImageGenerator * imageGenerator;              //@synthesize imageGenerator=_imageGenerator - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * loadedImagesSet;                 //@synthesize loadedImagesSet=_loadedImagesSet - In the implementation block
@property (nonatomic,readonly) float pixelsPerSecond; 
@property (nonatomic,readonly) float secondsPerThumbnail; 
@property (nonatomic,retain) AVAsset * asset;                                     //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) CGSize thumbnailSize;                                //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
-(void)setLoadedImagesSet:(NSMutableIndexSet *)arg1 ;
-(float)pixelsPerSecond;
-(void)updateThumbnailLayout;
-(float)secondsPerThumbnail;
-(NSMutableIndexSet *)loadedImagesSet;
-(void)generateVisibleThumbnails:(id)arg1 ;
-(id)cachedThumbnailForIndex:(unsigned)arg1 ;
-(void)updateVisibleThumbnails;
-(id)cacheKeyForIndex:(unsigned)arg1 ;
-(void)setThumbnail:(id)arg1 forIndex:(unsigned)arg2 ;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(AVAsset *)asset;
-(void)setAsset:(AVAsset *)arg1 ;
-(CGSize)thumbnailSize;
-(void)setImageGenerator:(AVAssetImageGenerator *)arg1 ;
-(AVAssetImageGenerator *)imageGenerator;
@end

