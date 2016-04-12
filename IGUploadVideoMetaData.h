

#import <Instagram/Instagram-Structs.h>
@interface IGUploadVideoMetaData : NSObject {

	CGSize _videoSize;
	SCD_Struct_IG44 _videoDuration;

}

@property (assign,nonatomic) CGSize videoSize;                           //@synthesize videoSize=_videoSize - In the implementation block
@property (assign,nonatomic) SCD_Struct_IG44 videoDuration;              //@synthesize videoDuration=_videoDuration - In the implementation block
-(SCD_Struct_IG44)videoDuration;
-(CGSize)videoSize;
-(void)setVideoDuration:(SCD_Struct_IG44)arg1 ;
-(void)setVideoSize:(CGSize)arg1 ;
-(id)toDictionary;
@end

