/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:04 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

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
-(void)setLoadedImagesSet:(NSMutableIndexSet *)arg1 ;
-(int)thumbnailCount;
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

