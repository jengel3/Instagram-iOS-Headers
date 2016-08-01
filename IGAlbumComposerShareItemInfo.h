

@class NSString;

@interface IGAlbumComposerShareItemInfo : NSObject {

	char _hasText;
	char _hasDrawing;
	int _mediaType;
	int _mediaSource;
	int _flashMode;
	int _cameraPosition;
	NSString* _filterName;
	NSString* _uploadID;
	double _videoDuration;

}

@property (assign,nonatomic) int mediaType;                      //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) int mediaSource;                    //@synthesize mediaSource=_mediaSource - In the implementation block
@property (assign,nonatomic) double videoDuration;               //@synthesize videoDuration=_videoDuration - In the implementation block
@property (assign,nonatomic) char hasText;                       //@synthesize hasText=_hasText - In the implementation block
@property (assign,nonatomic) char hasDrawing;                    //@synthesize hasDrawing=_hasDrawing - In the implementation block
@property (assign,nonatomic) int flashMode;                      //@synthesize flashMode=_flashMode - In the implementation block
@property (assign,nonatomic) int cameraPosition;                 //@synthesize cameraPosition=_cameraPosition - In the implementation block
@property (nonatomic,retain) NSString * filterName;              //@synthesize filterName=_filterName - In the implementation block
@property (nonatomic,retain) NSString * uploadID;                //@synthesize uploadID=_uploadID - In the implementation block
-(id)initWithMediaType:(int)arg1 mediaSource:(int)arg2 videoDuration:(double)arg3 hasText:(char)arg4 hasDrawing:(char)arg5 flashMode:(int)arg6 cameraPosition:(int)arg7 filterName:(id)arg8 uploadID:(id)arg9 ;
-(int)mediaSource;
-(void)setMediaSource:(int)arg1 ;
-(void)setHasText:(char)arg1 ;
-(char)hasDrawing;
-(void)setHasDrawing:(char)arg1 ;
-(NSString *)filterName;
-(int)mediaType;
-(double)videoDuration;
-(void)setMediaType:(int)arg1 ;
-(void)setVideoDuration:(double)arg1 ;
-(NSString *)uploadID;
-(void)setUploadID:(NSString *)arg1 ;
-(char)hasText;
-(int)flashMode;
-(void)setFlashMode:(int)arg1 ;
-(void)setFilterName:(NSString *)arg1 ;
-(int)cameraPosition;
-(void)setCameraPosition:(int)arg1 ;
@end

