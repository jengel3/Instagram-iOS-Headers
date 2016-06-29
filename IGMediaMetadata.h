
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectUploadableProducer.h>
#import <Instagram/IGMediaMetadataProtocol.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, UIImage, IGDirectShareRecipient, IGLocationMetadata, IGUsertagsMetadata, IGShareListManager, NSDictionary, IGVideoMetadata, NSArray, IGEditsMetadata, IGPostUploadModel, NSDate, IGUploadModel;

@interface IGMediaMetadata : NSObject <IGDirectUploadableProducer, IGMediaMetadataProtocol, NSCoding> {

	char _shouldKeepCaptionOnMediaChange;
	NSString* _mediaMetadataId;
	UIImage* _originalImage;
	NSString* _caption;
	int _shareType;
	IGDirectShareRecipient* _directRecipient;
	IGLocationMetadata* _locationMetadata;
	IGUsertagsMetadata* _usertagsMetadata;
	IGShareListManager* _shareListManager;
	float _captionPositionY;
	NSString* _albumCaption;
	int _mediaType;
	int _sourceType;
	NSDictionary* _exifData;
	int _cameraPosition;
	float _deviceAngle;
	IGVideoMetadata* _videoMetadata;
	NSArray* _preselectedIdentifiers;
	IGEditsMetadata* _editsMetadata;
	IGPostUploadModel* _post;
	NSDate* _uploadStartTime;
	UIImage* _snapshot;
	int _preselectedMediaBehavior;
	CGRect _originalImageCropRect;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * mediaMetadataId;                            //@synthesize mediaMetadataId=_mediaMetadataId - In the implementation block
@property (nonatomic,retain) IGLocationMetadata * locationMetadata;                 //@synthesize locationMetadata=_locationMetadata - In the implementation block
@property (nonatomic,retain) IGShareListManager * shareListManager;                 //@synthesize shareListManager=_shareListManager - In the implementation block
@property (nonatomic,retain) UIImage * originalImage;                               //@synthesize originalImage=_originalImage - In the implementation block
@property (assign,nonatomic) CGRect originalImageCropRect;                          //@synthesize originalImageCropRect=_originalImageCropRect - In the implementation block
@property (nonatomic,copy) NSString * caption;                                      //@synthesize caption=_caption - In the implementation block
@property (assign,nonatomic) char shouldKeepCaptionOnMediaChange;                   //@synthesize shouldKeepCaptionOnMediaChange=_shouldKeepCaptionOnMediaChange - In the implementation block
@property (assign,nonatomic) int shareType;                                         //@synthesize shareType=_shareType - In the implementation block
@property (nonatomic,retain) IGDirectShareRecipient * directRecipient;              //@synthesize directRecipient=_directRecipient - In the implementation block
@property (nonatomic,readonly) IGUsertagsMetadata * usertagsMetadata;               //@synthesize usertagsMetadata=_usertagsMetadata - In the implementation block
@property (assign,nonatomic) float captionPositionY;                                //@synthesize captionPositionY=_captionPositionY - In the implementation block
@property (nonatomic,copy) NSString * albumCaption;                                 //@synthesize albumCaption=_albumCaption - In the implementation block
@property (nonatomic,readonly) int mediaType;                                       //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) int sourceType;                                      //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,readonly) NSDictionary * exifData;                             //@synthesize exifData=_exifData - In the implementation block
@property (nonatomic,readonly) int cameraPosition;                                  //@synthesize cameraPosition=_cameraPosition - In the implementation block
@property (nonatomic,readonly) float deviceAngle;                                   //@synthesize deviceAngle=_deviceAngle - In the implementation block
@property (nonatomic,readonly) IGVideoMetadata * videoMetadata;                     //@synthesize videoMetadata=_videoMetadata - In the implementation block
@property (nonatomic,retain) NSArray * preselectedIdentifiers;                      //@synthesize preselectedIdentifiers=_preselectedIdentifiers - In the implementation block
@property (nonatomic,retain) IGEditsMetadata * editsMetadata;                       //@synthesize editsMetadata=_editsMetadata - In the implementation block
@property (nonatomic,retain) IGPostUploadModel * post;                              //@synthesize post=_post - In the implementation block
@property (nonatomic,retain) NSDate * uploadStartTime;                              //@synthesize uploadStartTime=_uploadStartTime - In the implementation block
@property (nonatomic,readonly) IGUploadModel * upload; 
@property (nonatomic,retain) UIImage * snapshot;                                    //@synthesize snapshot=_snapshot - In the implementation block
@property (assign,nonatomic) int preselectedMediaBehavior;                          //@synthesize preselectedMediaBehavior=_preselectedMediaBehavior - In the implementation block
-(float)deviceAngle;
-(void)prepareToShare;
-(id)sharingInfo;
-(void)updateIsAudioMuted:(char)arg1 ;
-(void)setPost:(IGPostUploadModel *)arg1 ;
-(void)setCaptionPositionY:(float)arg1 ;
-(NSDictionary *)exifData;
-(IGEditsMetadata *)editsMetadata;
-(void)prepareForNewVideo:(id)arg1 editsMetadata:(id)arg2 ;
-(void)cancelCurrentPost;
-(void)cancelCurrentUpload;
-(NSString *)mediaMetadataId;
-(CGRect)originalImageCropRect;
-(void)prepareForNewMediaOfType:(int)arg1 fromSource:(int)arg2 EXIFDictionary:(id)arg3 cameraPosition:(int)arg4 deviceAngle:(float)arg5 editsMetadata:(id)arg6 videoMetadata:(id)arg7 ;
-(void)createShareListManager;
-(void)createLocationMetadata;
-(IGLocationMetadata *)locationMetadata;
-(IGUsertagsMetadata *)usertagsMetadata;
-(float)captionPositionY;
-(NSString *)albumCaption;
-(void)fetchVenue;
-(void)setMediaMetadataId:(NSString *)arg1 ;
-(void)setOriginalImageCropRect:(CGRect)arg1 ;
-(char)shouldKeepCaptionOnMediaChange;
-(void)setLocationMetadata:(IGLocationMetadata *)arg1 ;
-(void)setShareListManager:(IGShareListManager *)arg1 ;
-(void)setAlbumCaption:(NSString *)arg1 ;
-(int)preselectedMediaBehavior;
-(NSArray *)preselectedIdentifiers;
-(void)setPreselectedIdentifiers:(NSArray *)arg1 ;
-(id)uploadableModelWithParameter:(id)arg1 ;
-(IGDirectShareRecipient *)directRecipient;
-(void)setDirectRecipient:(IGDirectShareRecipient *)arg1 ;
-(IGPostUploadModel *)post;
-(IGShareListManager *)shareListManager;
-(int)shareType;
-(void)prepareForNewPhotoFromSource:(int)arg1 EXIFDictionary:(id)arg2 cameraPosition:(int)arg3 deviceAngle:(float)arg4 ;
-(void)setShareType:(int)arg1 ;
-(void)setPreselectedMediaBehavior:(int)arg1 ;
-(void)setEditsMetadata:(IGEditsMetadata *)arg1 ;
-(void)setUploadStartTime:(NSDate *)arg1 ;
-(NSDate *)uploadStartTime;
-(IGVideoMetadata *)videoMetadata;
-(char)hasEditedShareInfo;
-(void)setShouldKeepCaptionOnMediaChange:(char)arg1 ;
-(void)updateEditsInfo:(id)arg1 ;
-(void)updateCoverFramePosition:(float)arg1 ;
-(IGUploadModel *)upload;
-(int)mediaType;
-(void)setOriginalImage:(UIImage *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(UIImage *)snapshot;
-(int)sourceType;
-(void)setSnapshot:(UIImage *)arg1 ;
-(NSString *)caption;
-(void)setCaption:(NSString *)arg1 ;
-(UIImage *)originalImage;
-(int)cameraPosition;
@end

