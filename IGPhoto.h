
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <Instagram/IGImageURLProvider.h>

@class NSString, NSData, NSArray;

@interface IGPhoto : NSObject <NSCoding, IGImageURLProvider> {

	NSString* _mediaID;
	NSData* _previewImageData;
	NSArray* _imageVersions;
	CGSize _aspectRatio;

}

@property (nonatomic,retain) NSArray * imageVersions;                       //@synthesize imageVersions=_imageVersions - In the implementation block
@property (assign,nonatomic) CGSize aspectRatio;                            //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaID;                     //@synthesize mediaID=_mediaID - In the implementation block
@property (nonatomic,copy,readonly) NSData * previewImageData;              //@synthesize previewImageData=_previewImageData - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)arrayForImageVersions:(id)arg1 ;
+(CGSize)aspectRatioForImageVersions:(id)arg1 ;
+(CGSize)imageSizeForImageVersion:(id)arg1 ;
-(NSData *)previewImageData;
-(id)imageURLForWidth:(float)arg1 ;
-(id)imageURLForWidth:(float)arg1 option:(int)arg2 ;
-(id)imageURLForWidth:(float)arg1 option:(int)arg2 scale:(float)arg3 ;
-(id)imageURLOfAtLeastWidth:(float)arg1 scale:(float)arg2 ;
-(id)thumbnailURLForAspectFillSize:(CGSize)arg1 option:(int)arg2 ;
-(id)initWithFeedItemDictionary:(id)arg1 ;
-(id)initWithImageVersions:(id)arg1 ;
-(id)initWithImageVersions:(id)arg1 mediaID:(id)arg2 originalMediaSize:(CGSize)arg3 previewImageData:(id)arg4 ;
-(NSArray *)imageVersions;
-(int)originalAspectRatioImageIndexNearestToWidth:(float)arg1 scale:(float)arg2 ;
-(id)imageURLForImageIndex:(int)arg1 ;
-(int)originalAspectRatioImageIndexNearestToHeight:(float)arg1 scale:(float)arg2 ;
-(int)imageIndexOfAtLeastWidth:(float)arg1 scale:(float)arg2 ;
-(id)imageIndicesOfAtLeastSize:(CGSize)arg1 scale:(float)arg2 ;
-(id)imageURLForHeight:(float)arg1 option:(int)arg2 scale:(float)arg3 ;
-(int)originalAspectRatioImageIndexNearestToRequestedDimension:(float)arg1 imageInfoKey:(id)arg2 ;
-(void)setImageVersions:(NSArray *)arg1 ;
-(NSString *)mediaID;
-(CGSize)aspectRatio;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(id)preloadedImage;
-(void)setAspectRatio:(CGSize)arg1 ;
@end

