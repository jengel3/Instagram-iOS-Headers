
#import <Instagram/IGVideoRendererProgressDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, IGMediaMetadata, NSMutableDictionary, UIImage, IGVideoComposition, IGVideoRenderer, IGUploadModel;

@interface IGPostUploadModel : NSObject <IGVideoRendererProgressDelegate, NSSecureCoding> {

	char _shouldSaveToLibrary;
	NSString* _postID;
	NSString* _userPK;
	int _shareType;
	IGMediaMetadata* _mediaMetadata;
	NSMutableDictionary* _postDict;
	UIImage* _photo;
	IGVideoComposition* _video;
	IGVideoRenderer* _videoRenderer;
	float _renderProgress;
	float _uploadProgress;
	float _shareProgress;
	IGUploadModel* _upload;

}

@property (nonatomic,retain) NSString * postID;                                   //@synthesize postID=_postID - In the implementation block
@property (assign,nonatomic) float renderProgress;                                //@synthesize renderProgress=_renderProgress - In the implementation block
@property (assign,nonatomic) float uploadProgress;                                //@synthesize uploadProgress=_uploadProgress - In the implementation block
@property (assign,nonatomic) float shareProgress;                                 //@synthesize shareProgress=_shareProgress - In the implementation block
@property (nonatomic,retain) IGUploadModel * upload;                              //@synthesize upload=_upload - In the implementation block
@property (nonatomic,readonly) NSString * userPK;                                 //@synthesize userPK=_userPK - In the implementation block
@property (nonatomic,readonly) NSString * uploadID; 
@property (assign,nonatomic) int shareType;                                       //@synthesize shareType=_shareType - In the implementation block
@property (nonatomic,readonly) int postType; 
@property (assign,nonatomic,__weak) IGMediaMetadata * mediaMetadata;              //@synthesize mediaMetadata=_mediaMetadata - In the implementation block
@property (assign,nonatomic) char shouldSaveToLibrary;                            //@synthesize shouldSaveToLibrary=_shouldSaveToLibrary - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * postDict;                      //@synthesize postDict=_postDict - In the implementation block
@property (nonatomic,retain) UIImage * photo;                                     //@synthesize photo=_photo - In the implementation block
@property (nonatomic,retain) IGVideoComposition * video;                          //@synthesize video=_video - In the implementation block
@property (assign,nonatomic,__weak) IGVideoRenderer * videoRenderer;              //@synthesize videoRenderer=_videoRenderer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(void)setShareType:(int)arg1 ;
-(void)renderMedia;
-(int)postType;
-(void)uploadMediaWithWaterfall:(id)arg1 ;
-(void)setShouldSaveToLibrary:(char)arg1 ;
-(void)setUploadProgress:(float)arg1 ;
-(float)uploadProgress;
-(float)renderProgress;
-(NSMutableDictionary *)postDict;
-(void)setShareProgress:(float)arg1 ;
-(void)setVideoRenderer:(IGVideoRenderer *)arg1 ;
-(void)setRenderProgress:(float)arg1 ;
-(void)uploadPhoto;
-(void)uploadVideo;
-(void)setPostDict:(NSMutableDictionary *)arg1 ;
-(void)videoRenderer:(id)arg1 didProgress:(float)arg2 ;
-(void)videoRenderer:(id)arg1 didFinishRenderingVideoToURL:(id)arg2 canceled:(char)arg3 ;
-(void)videoRenderer:(id)arg1 didFailWithError:(id)arg2 ;
-(NSString *)postID;
-(void)setPostID:(NSString *)arg1 ;
-(NSString *)userPK;
-(int)shareType;
-(char)shouldSaveToLibrary;
-(IGVideoRenderer *)videoRenderer;
-(float)shareProgress;
-(IGUploadModel *)upload;
-(void)setUpload:(IGUploadModel *)arg1 ;
-(UIImage *)photo;
-(NSString *)uploadID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)suspend;
-(void)resume;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)share;
-(void)setPhoto:(UIImage *)arg1 ;
-(IGVideoComposition *)video;
-(void)setVideo:(IGVideoComposition *)arg1 ;
-(IGMediaMetadata *)mediaMetadata;
-(void)setMediaMetadata:(IGMediaMetadata *)arg1 ;
@end

