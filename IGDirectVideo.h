
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContent.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <Instagram/IGDirectMediaContent.h>
#import <Instagram/IGDirectContentMediaUploadable.h>
#import <Instagram/IGDirectContentFirstAppearance.h>
#import <Instagram/IGDirectCommentable.h>

@class IGDirectContentUploadInfo, NSString, IGUploadModel, NSData, IGVideo, NSValue, IGPhoto, NSURL;

@interface IGDirectVideo : IGDirectContent <NSCoding, IGDirectMediaContent, IGDirectContentMediaUploadable, IGDirectContentFirstAppearance, IGDirectCommentable> {

	char _isFirstAppearance;
	char _useMainCameraUploadFlow;
	IGDirectContentUploadInfo* _uploadInfo;
	NSString* _uploadComment;
	IGUploadModel* _uploadModel;
	NSData* _imageData;
	IGVideo* _video;
	NSData* _videoData;
	NSData* _renderedVideoData;
	NSValue* _renderedVideoSizeValue;
	NSString* _videoResult;
	int _numberOfFailedUploads;
	IGPhoto* _photo;
	CGRect _cropRect;

}

@property (nonatomic,retain) IGVideo * video;                                     //@synthesize video=_video - In the implementation block
@property (nonatomic,retain) NSData * videoData;                                  //@synthesize videoData=_videoData - In the implementation block
@property (nonatomic,retain) NSData * renderedVideoData;                          //@synthesize renderedVideoData=_renderedVideoData - In the implementation block
@property (nonatomic,retain) NSValue * renderedVideoSizeValue;                    //@synthesize renderedVideoSizeValue=_renderedVideoSizeValue - In the implementation block
@property (assign,nonatomic) CGRect cropRect;                                     //@synthesize cropRect=_cropRect - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoResult;                       //@synthesize videoResult=_videoResult - In the implementation block
@property (assign,nonatomic) int numberOfFailedUploads;                           //@synthesize numberOfFailedUploads=_numberOfFailedUploads - In the implementation block
@property (nonatomic,retain) IGPhoto * photo;                                     //@synthesize photo=_photo - In the implementation block
@property (assign,nonatomic) char useMainCameraUploadFlow;                        //@synthesize useMainCameraUploadFlow=_useMainCameraUploadFlow - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) IGDirectContentUploadInfo * uploadInfo;              //@synthesize uploadInfo=_uploadInfo - In the implementation block
@property (nonatomic,readonly) NSURL * cacheKeyURL; 
@property (nonatomic,retain) NSData * imageData;                                  //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,retain) IGUploadModel * uploadModel;                         //@synthesize uploadModel=_uploadModel - In the implementation block
@property (assign,nonatomic) char isFirstAppearance;                              //@synthesize isFirstAppearance=_isFirstAppearance - In the implementation block
@property (nonatomic,retain) NSString * uploadComment;                            //@synthesize uploadComment=_uploadComment - In the implementation block
-(IGDirectContentUploadInfo *)uploadInfo;
-(void)setUploadInfo:(IGDirectContentUploadInfo *)arg1 ;
-(id)contentTypeString;
-(NSString *)uploadComment;
-(void)setUploadComment:(NSString *)arg1 ;
-(IGUploadModel *)uploadModel;
-(char)useMainCameraUploadFlow;
-(NSURL *)cacheKeyURL;
-(void)setUploadModel:(IGUploadModel *)arg1 ;
-(char)isFirstAppearance;
-(void)setIsFirstAppearance:(char)arg1 ;
-(id)initAsUploadWithComment:(id)arg1 recipient:(id)arg2 useMainCameraUploadFlow:(char)arg3 ;
-(void)setUseMainCameraUploadFlow:(char)arg1 ;
-(NSData *)renderedVideoData;
-(NSValue *)renderedVideoSizeValue;
-(int)numberOfFailedUploads;
-(void)setRenderedVideoData:(NSData *)arg1 ;
-(void)setRenderedVideoSizeValue:(NSValue *)arg1 ;
-(void)setNumberOfFailedUploads:(int)arg1 ;
-(char)isUploading;
-(IGPhoto *)photo;
-(NSData *)imageData;
-(CGRect)cropRect;
-(void)setCropRect:(CGRect)arg1 ;
-(void)setVideoData:(NSData *)arg1 ;
-(NSData *)videoData;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithDictionary:(id)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(id)digestDescription;
-(void)setPhoto:(IGPhoto *)arg1 ;
-(IGVideo *)video;
-(void)setVideo:(IGVideo *)arg1 ;
-(NSString *)videoResult;
@end

