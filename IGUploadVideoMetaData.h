

#import <Instagram/Instagram-Structs.h>
@interface IGUploadVideoMetaData : NSObject {

	CGSize _videoSize;
	SCD_Struct_IG77 _videoDuration;

}

@property (assign,nonatomic) CGSize videoSize;                           //@synthesize videoSize=_videoSize - In the implementation block
@property (assign,nonatomic) SCD_Struct_IG77 videoDuration;              //@synthesize videoDuration=_videoDuration - In the implementation block
-(id)initWithUrl:(id)arg1 ;
-(SCD_Struct_IG77)videoDuration;
-(CGSize)videoSize;
-(void)setVideoDuration:(SCD_Struct_IG77)arg1 ;
-(void)setVideoSize:(CGSize)arg1 ;
-(id)toDictionary;
@end

