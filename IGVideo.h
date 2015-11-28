
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSNumber, NSArray;

@interface IGVideo : NSObject <NSCoding> {

	int _videoLength;
	NSNumber* _audioDetected;
	NSArray* _videoVersions;
	unsigned _pHash;

}

@property (nonatomic,readonly) int videoLength;                                              //@synthesize videoLength=_videoLength - In the implementation block
@property (getter=isAudioDetected,nonatomic,readonly) NSNumber * audioDetected;              //@synthesize audioDetected=_audioDetected - In the implementation block
@property (nonatomic,retain) NSArray * videoVersions;                                        //@synthesize videoVersions=_videoVersions - In the implementation block
@property (assign,nonatomic) unsigned pHash;                                                 //@synthesize pHash=_pHash - In the implementation block
+(int)videoVersionForCurrentNetworkConditions;
-(id)videoURLForVideoVersion:(int)arg1 ;
-(id)initWithFeedItemDictionary:(id)arg1 ;
-(id)videoURLForCurrentNetworkConditions;
-(id)isAudioDetected;
-(id)initWithVideoVersions:(id)arg1 videoLength:(int)arg2 audioDetected:(id)arg3 ;
-(NSArray *)videoVersions;
-(id)allVideoURLs;
-(unsigned)pHash;
-(void)setPHash:(unsigned)arg1 ;
-(id)videoInfoDictionaryForVideoVersion:(int)arg1 ;
-(void)setVideoVersions:(NSArray *)arg1 ;
-(CGSize)aspectRatio;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(int)videoLength;
@end

