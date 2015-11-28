
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class NSCache, AVAsset, AVAssetImageGenerator, NSMutableIndexSet;

@interface IGFilmStripView : UIView {

	NSCache* _thumbnailCache;
	char _generatingThumbnails;
	int _firstTumbnailTime;
	CGAffineTransform _trackTransform;
	AVAsset* _asset;
	AVAssetImageGenerator* _imageGenerator;
	NSMutableIndexSet* _loadedImagesSet;

}

@property (nonatomic,retain) AVAsset * asset;                                     //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) AVAssetImageGenerator * imageGenerator;              //@synthesize imageGenerator=_imageGenerator - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * loadedImagesSet;                 //@synthesize loadedImagesSet=_loadedImagesSet - In the implementation block
@property (nonatomic,readonly) float thumbnailSize; 
@property (nonatomic,readonly) int thumbnailCount; 
@property (nonatomic,readonly) float pixelsPerSecond; 
@property (nonatomic,readonly) float secondsPerThumbnail; 
-(int)thumbnailCount;
-(void)setLoadedImagesSet:(NSMutableIndexSet *)arg1 ;
-(float)secondsPerThumbnail;
-(float)pixelsPerSecond;
-(NSMutableIndexSet *)loadedImagesSet;
-(void)generateVisibleThumbnails:(id)arg1 ;
-(id)cachedThumbnailForIndex:(unsigned)arg1 ;
-(void)setThumbnail:(id)arg1 forIndex:(unsigned)arg2 ;
-(void)updateVisibleThumbnails;
-(id)cacheKeyForIndex:(unsigned)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(AVAsset *)asset;
-(void)setAsset:(AVAsset *)arg1 ;
-(float)thumbnailSize;
-(void)setImageGenerator:(AVAssetImageGenerator *)arg1 ;
-(AVAssetImageGenerator *)imageGenerator;
@end

