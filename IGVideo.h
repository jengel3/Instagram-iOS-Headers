
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <Instagram/IGVideoURLProvider.h>

@class NSNumber, NSURL, NSSet, NSArray, NSString;

@interface IGVideo : NSObject <NSCoding, IGVideoURLProvider> {

	int _videoLength;
	NSNumber* _audioDetected;
	NSURL* _subtitleURL;
	NSSet* _allVideoURLs;
	NSArray* _videoVersions;
	unsigned _cachedHash;
	CGSize _aspectRatio;

}

@property (nonatomic,retain) NSArray * videoVersions;                                        //@synthesize videoVersions=_videoVersions - In the implementation block
@property (assign,nonatomic) unsigned cachedHash;                                            //@synthesize cachedHash=_cachedHash - In the implementation block
@property (assign,nonatomic) CGSize aspectRatio;                                             //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (nonatomic,readonly) int videoLength;                                              //@synthesize videoLength=_videoLength - In the implementation block
@property (getter=isAudioDetected,nonatomic,readonly) NSNumber * audioDetected;              //@synthesize audioDetected=_audioDetected - In the implementation block
@property (nonatomic,readonly) NSURL * subtitleURL;                                          //@synthesize subtitleURL=_subtitleURL - In the implementation block
@property (nonatomic,readonly) NSSet * allVideoURLs;                                         //@synthesize allVideoURLs=_allVideoURLs - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)videoVersionForCurrentNetworkConditions;
+(CGSize)aspectRatioForVideoVersions:(id)arg1 ;
+(id)videoInfoDictionaryForVideoVersion:(int)arg1 fromVideoVersions:(id)arg2 ;
-(id)videoURLForCurrentNetworkConditions;
-(id)videoURLForVideoVersion:(int)arg1 ;
-(id)initWithFeedItemDictionary:(id)arg1 ;
-(NSURL *)subtitleURL;
-(id)isAudioDetected;
-(id)initWithVideoVersions:(id)arg1 videoLength:(int)arg2 audioDetected:(id)arg3 originalMediaSize:(CGSize)arg4 subtitleURL:(id)arg5 ;
-(NSSet *)allVideoURLs;
-(NSArray *)videoVersions;
-(id)initWithVideoVersions:(id)arg1 videoLength:(int)arg2 audioDetected:(id)arg3 ;
-(void)setVideoVersions:(NSArray *)arg1 ;
-(CGSize)aspectRatio;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(unsigned)cachedHash;
-(void)setCachedHash:(unsigned)arg1 ;
-(void)setAspectRatio:(CGSize)arg1 ;
-(int)videoLength;
@end

