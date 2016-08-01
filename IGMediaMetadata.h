
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectUploadableProducer.h>
#import <Instagram/IGMediaMetadataProtocol.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, UIImage, IGDirectShareRecipient, IGLocationMetadata, IGUsertagsMetadata, IGShareListManager, NSDictionary, IGVideoMetadata, NSArray, IGEditsMetadata, IGPostUploadModel, IGVideoInfo, IGUploadModel;

@interface IGMediaMetadata : NSObject <IGDirectUploadableProducer, IGMediaMetadataProtocol, NSSecureCoding, NSCopying> {

	char _shouldKeepCaptionOnMediaChange;
	NSString* _mediaMetadataId;
	NSDate* _creationDate;
	UIImage* _originalImage;
	NSString* _caption;
	int _shareType;
	IGDirectShareRecipient* _directRecipient;
	IGLocationMetadata* _locationMetadata;
	IGUsertagsMetadata* _usertagsMetadata;
	IGShareListManager* _shareListManager;
	int _mediaType;
	int _sourceType;
	NSString* _sourceMediaID;
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
	UIImage* _preparedImage;
	IGVideoInfo* _preparedVideoInfo;
	CGRect _originalImageCropRect;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * mediaMetadataId;                            //@synthesize mediaMetadataId=_mediaMetadataId - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                                 //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) IGLocationMetadata * locationMetadata;                 //@synthesize locationMetadata=_locationMetadata - In the implementation block
@property (nonatomic,retain) IGUsertagsMetadata * usertagsMetadata;                 //@synthesize usertagsMetadata=_usertagsMetadata - In the implementation block
@property (nonatomic,retain) IGShareListManager * shareListManager;                 //@synthesize shareListManager=_shareListManager - In the implementation block
@property (assign,nonatomic) int mediaType;                                         //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) int sourceType;                                        //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,retain) NSString * sourceMediaID;                              //@synthesize sourceMediaID=_sourceMediaID - In the implementation block
@property (nonatomic,retain) NSDictionary * exifData;                               //@synthesize exifData=_exifData - In the implementation block
@property (assign,nonatomic) int cameraPosition;                                    //@synthesize cameraPosition=_cameraPosition - In the implementation block
@property (assign,nonatomic) float deviceAngle;                                     //@synthesize deviceAngle=_deviceAngle - In the implementation block
@property (nonatomic,retain) IGVideoMetadata * videoMetadata;                       //@synthesize videoMetadata=_videoMetadata - In the implementation block
@property (nonatomic,retain) IGEditsMetadata * editsMetadata;                       //@synthesize editsMetadata=_editsMetadata - In the implementation block
@property (nonatomic,retain) UIImage * originalImage;                               //@synthesize originalImage=_originalImage - In the implementation block
@property (assign,nonatomic) CGRect originalImageCropRect;                          //@synthesize originalImageCropRect=_originalImageCropRect - In the implementation block
@property (nonatomic,copy) NSString * caption;                                      //@synthesize caption=_caption - In the implementation block
@property (assign,nonatomic) char shouldKeepCaptionOnMediaChange;                   //@synthesize shouldKeepCaptionOnMediaChange=_shouldKeepCaptionOnMediaChange - In the implementation block
@property (assign,nonatomic) int shareType;                                         //@synthesize shareType=_shareType - In the implementation block
@property (nonatomic,retain) IGDirectShareRecipient * directRecipient;              //@synthesize directRecipient=_directRecipient - In the implementation block
@property (nonatomic,retain) NSArray * preselectedIdentifiers;                      //@synthesize preselectedIdentifiers=_preselectedIdentifiers - In the implementation block
@property (nonatomic,retain) IGPostUploadModel * post;                              //@synthesize post=_post - In the implementation block
@property (nonatomic,retain) NSDate * uploadStartTime;                              //@synthesize uploadStartTime=_uploadStartTime - In the implementation block
@property (nonatomic,readonly) IGUploadModel * upload; 
@property (nonatomic,retain) UIImage * snapshot;                                    //@synthesize snapshot=_snapshot - In the implementation block
@property (assign,nonatomic) int preselectedMediaBehavior;                          //@synthesize preselectedMediaBehavior=_preselectedMediaBehavior - In the implementation block
@property (nonatomic,retain) UIImage * preparedImage;                               //@synthesize preparedImage=_preparedImage - In the implementation block
@property (nonatomic,retain) IGVideoInfo * preparedVideoInfo;                       //@synthesize preparedVideoInfo=_preparedVideoInfo - In the implementation block
+(char)supportsSecureCoding;
-(void)setPost:(IGPostUploadModel *)arg1 ;
-(void)prepareForNewPhotoFromSource:(int)arg1 EXIFDictionary:(id)arg2 cameraPosition:(int)arg3 deviceAngle:(float)arg4 ;
-(void)setShareType:(int)arg1 ;
-(void)updateEditsInfo:(id)arg1 ;
-(void)prepareToShare;
-(void)prepareForNewVideo:(id)arg1 ;
-(IGPostUploadModel *)post;
-(NSDate *)uploadStartTime;
-(void)cancelCurrentPost;
-(void)cancelCurrentUpload;
-(void)setDeviceAngle:(float)arg1 ;
-(void)prepareForNewMediaOfType:(int)arg1 fromSource:(int)arg2 EXIFDictionary:(id)arg3 cameraPosition:(int)arg4 deviceAngle:(float)arg5 videoMetadata:(id)arg6 ;
-(id)initBlank;
-(void)setMediaMetadataId:(NSString *)arg1 ;
-(void)setOriginalImageCropRect:(CGRect)arg1 ;
-(void)setLocationMetadata:(IGLocationMetadata *)arg1 ;
-(void)setUsertagsMetadata:(IGUsertagsMetadata *)arg1 ;
-(void)setSourceMediaID:(NSString *)arg1 ;
-(void)setExifData:(NSDictionary *)arg1 ;
-(void)setVideoMetadata:(IGVideoMetadata *)arg1 ;
-(void)setEditsMetadata:(IGEditsMetadata *)arg1 ;
-(void)createShareListManager;
-(void)createLocationMetadata;
-(IGLocationMetadata *)locationMetadata;
-(IGUsertagsMetadata *)usertagsMetadata;
-(NSString *)sourceMediaID;
-(id)initWithSourceType:(int)arg1 sourceMediaID:(id)arg2 ;
-(void)fetchVenue;
-(CGRect)originalImageCropRect;
-(char)shouldKeepCaptionOnMediaChange;
-(void)setShareListManager:(IGShareListManager *)arg1 ;
-(int)preselectedMediaBehavior;
-(void)setPreparedImage:(UIImage *)arg1 ;
-(void)setPreparedVideoInfo:(IGVideoInfo *)arg1 ;
-(UIImage *)preparedImage;
-(IGVideoInfo *)preparedVideoInfo;
-(NSArray *)preselectedIdentifiers;
-(void)setPreselectedIdentifiers:(NSArray *)arg1 ;
-(NSDictionary *)exifData;
-(NSString *)mediaMetadataId;
-(float)deviceAngle;
-(id)uploadableModelWithParameter:(id)arg1 ;
-(IGDirectShareRecipient *)directRecipient;
-(void)setDirectRecipient:(IGDirectShareRecipient *)arg1 ;
-(IGShareListManager *)shareListManager;
-(void)setUploadStartTime:(NSDate *)arg1 ;
-(id)sharingInfo;
-(int)shareType;
-(IGUploadModel *)upload;
-(IGVideoMetadata *)videoMetadata;
-(char)hasEditedShareInfo;
-(void)setShouldKeepCaptionOnMediaChange:(char)arg1 ;
-(IGEditsMetadata *)editsMetadata;
-(void)updateCoverFramePosition:(float)arg1 ;
-(void)updateIsAudioMuted:(char)arg1 ;
-(void)setPreselectedMediaBehavior:(int)arg1 ;
-(int)mediaType;
-(void)setOriginalImage:(UIImage *)arg1 ;
-(NSDate *)creationDate;
-(void)setMediaType:(int)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIImage *)snapshot;
-(int)sourceType;
-(void)setSourceType:(int)arg1 ;
-(void)setSnapshot:(UIImage *)arg1 ;
-(NSString *)caption;
-(void)setCaption:(NSString *)arg1 ;
-(UIImage *)originalImage;
-(int)cameraPosition;
-(void)setCameraPosition:(int)arg1 ;
@end

