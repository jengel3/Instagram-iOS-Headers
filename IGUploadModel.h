
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <Instagram/IGVideoRendererProgressDelegate.h>

@protocol IGAnalyticsUploadWaterfall;
@class UIImage, NSData, NSString, NSDate, IGRequest, NSMutableDictionary, NSURL, NSArray, IGVideoRenderer, IGRequestError, NSMutableArray, IGUploadVideoMetaData;

@interface IGUploadModel : NSObject <NSCoding, IGVideoRendererProgressDelegate> {

	UIImage* _image;
	NSData* _imageData;
	char _createdOffline;
	NSString* _userPK;
	int _uploadDataType;
	NSDate* _uploadStartTime;
	int _postAction;
	int _postStatus;
	int _fromStatus;
	int _toStatus;
	IGRequest* _request;
	NSMutableDictionary* _postDict;
	float _renderProgress;
	float _uploadProgress;
	int _resultStatus;
	unsigned _uploadTaskIdentifier;
	unsigned _configureTaskIdentifier;
	int _shareType;
	NSURL* _videoDataFileURL;
	NSArray* _videoUploadURLs;
	unsigned _currentVideoUploadURLIndex;
	NSString* _transcodeVideoID;
	NSString* _sessionID;
	IGVideoRenderer* _videoRenderer;
	IGRequestError* _error;
	NSString* _errorMessage;
	int _numberOfFailedConfigures;
	int _numberOfFailedUploads;
	NSDate* _lastConfigureFailureTimestamp;
	NSDate* _lastUploadFailureTimestamp;
	int _numberOfAutoRetryAttempts;
	int _numberOfManualCancels;
	int _autoRetryResumeUploadCount;
	int _autoRetryConfigureCount;
	NSMutableArray* _currentRangesUploadedAlready;
	id<IGAnalyticsUploadWaterfall> _waterfall;
	NSDate* _videoStartUploadTime;
	float _videoUploadSpeed;
	IGUploadVideoMetaData* _videoMetadata;
	unsigned _photoBytesUploaded;
	unsigned _videoBytesUploaded;
	float _videoMaxDuration;
	int _numberOfManualRetries;
	int _qeUseSVE;
	NSDate* _lastUserActionTime;
	NSDate* _shareActionTime;
	NSMutableArray* _uploadStepCounts;
	int _uploadWidthMin;
	int _uploadWidthMax;
	int _uploadWidthMaxForHiResLandscape;
	float _minDownscaleHQResize;
	double _configureStartTimestamp;

}

@property (nonatomic,retain) NSString * userPK;                                          //@synthesize userPK=_userPK - In the implementation block
@property (nonatomic,copy) NSDate * videoStartUploadTime;                                //@synthesize videoStartUploadTime=_videoStartUploadTime - In the implementation block
@property (assign,nonatomic) float videoUploadSpeed;                                     //@synthesize videoUploadSpeed=_videoUploadSpeed - In the implementation block
@property (nonatomic,readonly) unsigned suggestedChunkSize; 
@property (nonatomic,retain) IGUploadVideoMetaData * videoMetadata;                      //@synthesize videoMetadata=_videoMetadata - In the implementation block
@property (assign,nonatomic) unsigned photoBytesUploaded;                                //@synthesize photoBytesUploaded=_photoBytesUploaded - In the implementation block
@property (assign,nonatomic) unsigned videoBytesUploaded;                                //@synthesize videoBytesUploaded=_videoBytesUploaded - In the implementation block
@property (assign,nonatomic) int numberOfFailedConfigures;                               //@synthesize numberOfFailedConfigures=_numberOfFailedConfigures - In the implementation block
@property (assign,nonatomic) int numberOfFailedUploads;                                  //@synthesize numberOfFailedUploads=_numberOfFailedUploads - In the implementation block
@property (nonatomic,retain) NSDate * lastConfigureFailureTimestamp;                     //@synthesize lastConfigureFailureTimestamp=_lastConfigureFailureTimestamp - In the implementation block
@property (nonatomic,retain) NSDate * lastUploadFailureTimestamp;                        //@synthesize lastUploadFailureTimestamp=_lastUploadFailureTimestamp - In the implementation block
@property (assign,nonatomic) int postStatus;                                             //@synthesize postStatus=_postStatus - In the implementation block
@property (assign,nonatomic) int postAction;                                             //@synthesize postAction=_postAction - In the implementation block
@property (assign,nonatomic) float renderProgress;                                       //@synthesize renderProgress=_renderProgress - In the implementation block
@property (assign,nonatomic) float uploadProgress;                                       //@synthesize uploadProgress=_uploadProgress - In the implementation block
@property (assign,nonatomic) float videoMaxDuration;                                     //@synthesize videoMaxDuration=_videoMaxDuration - In the implementation block
@property (assign,nonatomic) int numberOfManualRetries;                                  //@synthesize numberOfManualRetries=_numberOfManualRetries - In the implementation block
@property (assign,nonatomic) int qeUseSVE;                                               //@synthesize qeUseSVE=_qeUseSVE - In the implementation block
@property (nonatomic,retain) NSDate * lastUserActionTime;                                //@synthesize lastUserActionTime=_lastUserActionTime - In the implementation block
@property (nonatomic,retain) NSDate * shareActionTime;                                   //@synthesize shareActionTime=_shareActionTime - In the implementation block
@property (nonatomic,retain) NSMutableArray * uploadStepCounts;                          //@synthesize uploadStepCounts=_uploadStepCounts - In the implementation block
@property (assign,nonatomic) int uploadWidthMin;                                         //@synthesize uploadWidthMin=_uploadWidthMin - In the implementation block
@property (assign,nonatomic) int uploadWidthMax;                                         //@synthesize uploadWidthMax=_uploadWidthMax - In the implementation block
@property (assign,nonatomic) int uploadWidthMaxForHiResLandscape;                        //@synthesize uploadWidthMaxForHiResLandscape=_uploadWidthMaxForHiResLandscape - In the implementation block
@property (assign,nonatomic) float minDownscaleHQResize;                                 //@synthesize minDownscaleHQResize=_minDownscaleHQResize - In the implementation block
@property (assign,nonatomic) int uploadDataType;                                         //@synthesize uploadDataType=_uploadDataType - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,readonly) NSData * imageData;                                       //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,retain) NSDate * uploadStartTime;                                   //@synthesize uploadStartTime=_uploadStartTime - In the implementation block
@property (assign,nonatomic) double configureStartTimestamp;                             //@synthesize configureStartTimestamp=_configureStartTimestamp - In the implementation block
@property (nonatomic,readonly) NSString * uploadID; 
@property (nonatomic,readonly) int fromStatus;                                           //@synthesize fromStatus=_fromStatus - In the implementation block
@property (nonatomic,readonly) int toStatus;                                             //@synthesize toStatus=_toStatus - In the implementation block
@property (nonatomic,readonly) int targetStatus; 
@property (assign,nonatomic,__weak) IGRequest * request;                                 //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * postDict;                             //@synthesize postDict=_postDict - In the implementation block
@property (assign,nonatomic) int resultStatus;                                           //@synthesize resultStatus=_resultStatus - In the implementation block
@property (assign,nonatomic) unsigned uploadTaskIdentifier;                              //@synthesize uploadTaskIdentifier=_uploadTaskIdentifier - In the implementation block
@property (assign,nonatomic) unsigned configureTaskIdentifier;                           //@synthesize configureTaskIdentifier=_configureTaskIdentifier - In the implementation block
@property (assign,nonatomic) int shareType;                                              //@synthesize shareType=_shareType - In the implementation block
@property (assign,nonatomic) char createdOffline;                                        //@synthesize createdOffline=_createdOffline - In the implementation block
@property (nonatomic,copy) NSURL * videoDataFileURL;                                     //@synthesize videoDataFileURL=_videoDataFileURL - In the implementation block
@property (nonatomic,retain) NSArray * videoUploadURLs;                                  //@synthesize videoUploadURLs=_videoUploadURLs - In the implementation block
@property (assign,nonatomic) unsigned currentVideoUploadURLIndex;                        //@synthesize currentVideoUploadURLIndex=_currentVideoUploadURLIndex - In the implementation block
@property (nonatomic,copy) NSString * transcodeVideoID;                                  //@synthesize transcodeVideoID=_transcodeVideoID - In the implementation block
@property (nonatomic,copy) NSString * sessionID;                                         //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic,__weak) IGVideoRenderer * videoRenderer;                     //@synthesize videoRenderer=_videoRenderer - In the implementation block
@property (nonatomic,retain) IGRequestError * error;                                     //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSString * errorMessage;                                    //@synthesize errorMessage=_errorMessage - In the implementation block
@property (assign,nonatomic) int numberOfAutoRetryAttempts;                              //@synthesize numberOfAutoRetryAttempts=_numberOfAutoRetryAttempts - In the implementation block
@property (assign,nonatomic) int numberOfManualCancels;                                  //@synthesize numberOfManualCancels=_numberOfManualCancels - In the implementation block
@property (nonatomic,readonly) unsigned totalVideoBytesUploaded; 
@property (nonatomic,readonly) unsigned totalVideoBytesExpectToUpload; 
@property (assign,nonatomic) int autoRetryResumeUploadCount;                             //@synthesize autoRetryResumeUploadCount=_autoRetryResumeUploadCount - In the implementation block
@property (assign,nonatomic) int autoRetryConfigureCount;                                //@synthesize autoRetryConfigureCount=_autoRetryConfigureCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentRangesUploadedAlready;              //@synthesize currentRangesUploadedAlready=_currentRangesUploadedAlready - In the implementation block
@property (nonatomic,retain) id<IGAnalyticsUploadWaterfall> waterfall;                   //@synthesize waterfall=_waterfall - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)version;
-(void)setShareType:(int)arg1 ;
-(int)uploadDataType;
-(NSURL *)videoDataFileURL;
-(void)setUploadProgress:(float)arg1 ;
-(float)uploadProgress;
-(NSDate *)uploadStartTime;
-(float)renderProgress;
-(int)postStatus;
-(void)setVideoMetadata:(IGUploadVideoMetaData *)arg1 ;
-(int)numberOfFailedUploads;
-(void)setNumberOfFailedUploads:(int)arg1 ;
-(NSMutableDictionary *)postDict;
-(void)setVideoRenderer:(IGVideoRenderer *)arg1 ;
-(void)setRenderProgress:(float)arg1 ;
-(void)setUploadStartTime:(NSDate *)arg1 ;
-(void)setPostDict:(NSMutableDictionary *)arg1 ;
-(void)setVideoDataFileURL:(NSURL *)arg1 ;
-(void)setPostStatus:(int)arg1 toStatus:(int)arg2 ;
-(void)videoRenderer:(id)arg1 didProgress:(float)arg2 ;
-(void)videoRenderer:(id)arg1 didFinishRenderingVideoToURL:(id)arg2 canceled:(char)arg3 ;
-(void)videoRenderer:(id)arg1 didFailWithError:(id)arg2 ;
-(NSString *)userPK;
-(int)shareType;
-(IGVideoRenderer *)videoRenderer;
-(unsigned)totalVideoBytesUploaded;
-(int)postStatusFromPostStatusV0:(int)arg1 ;
-(void)updatePostStatusAfterInitFromCoder;
-(id<IGAnalyticsUploadWaterfall>)waterfall;
-(id)currentNotExpiredVideoUploadURL;
-(void)setPostStatus:(int)arg1 fromStatus:(int)arg2 toStatus:(int)arg3 ;
-(void)setPostStatus:(int)arg1 ;
-(void)incrementUploadStepCount:(int)arg1 ;
-(void)handleUploadSuspended;
-(void)handleUploadFailure;
-(void)handleConfigureFailure;
-(void)logStatusUpdate;
-(void)handleLoggingForPostActionUpdate;
-(void)setAutoRetryResumeUploadCount:(int)arg1 ;
-(void)setCurrentRangesUploadedAlready:(NSMutableArray *)arg1 ;
-(void)setVideoUploadURLs:(NSArray *)arg1 ;
-(void)setCurrentVideoUploadURLIndex:(unsigned)arg1 ;
-(void)setLastUploadFailureTimestamp:(NSDate *)arg1 ;
-(void)setPhotoBytesUploaded:(unsigned)arg1 ;
-(void)setVideoBytesUploaded:(unsigned)arg1 ;
-(int)numberOfFailedConfigures;
-(void)setNumberOfFailedConfigures:(int)arg1 ;
-(void)setLastConfigureFailureTimestamp:(NSDate *)arg1 ;
-(unsigned)totalVideoBytesExpectToUpload;
-(unsigned)suggestedChunkSize;
-(NSArray *)videoUploadURLs;
-(unsigned)currentVideoUploadURLIndex;
-(char)isURLExpired:(id)arg1 ;
-(id)advanceToNextNotExpiredVideoUploadURL;
-(void)updatePhotoUploadProgress:(unsigned)arg1 ;
-(void)updateVideoUploadProgress:(unsigned)arg1 ;
-(void)updateVideoUploadSpeedWithTotalBytesSent:(long long)arg1 ;
-(NSDate *)videoStartUploadTime;
-(void)setVideoUploadSpeed:(float)arg1 ;
-(void)setVideoStartUploadTime:(NSDate *)arg1 ;
-(void)logActionUpdate;
-(id)logWaterfallEvent:(id)arg1 ;
-(int)numberOfManualCancels;
-(void)setConfigureStartTimestamp:(double)arg1 ;
-(id)postStatusName;
-(int)fromStatus;
-(id)nameForUploadStatus:(int)arg1 ;
-(int)toStatus;
-(int)targetStatus;
-(double)configureStartTimestamp;
-(id)videoQEAnalyticsExtraData;
-(id)videoAnalyticsExtraDataForStatusEvent;
-(int)postAction;
-(id)videoAnalyticsExtraDataForActionEvent;
-(int)uploadWidthMin;
-(int)uploadWidthMax;
-(int)uploadWidthMaxForHiResLandscape;
-(float)videoMaxDuration;
-(int)qeUseSVE;
-(float)minDownscaleHQResize;
-(id)initWithStartTime:(id)arg1 userPK:(id)arg2 ;
-(void)didFailUpload;
-(void)setPostAction:(int)arg1 ;
-(char)isAlbumUpload;
-(char)hasDoneUploadWithAllRanges;
-(NSRange)getNextUploadRange;
-(void)updateUploadRangesInfo:(id)arg1 ;
-(void)resetUploadSpeed;
-(void)logRemoval;
-(void)logRetry;
-(void)setUserPK:(NSString *)arg1 ;
-(void)setUploadDataType:(int)arg1 ;
-(unsigned)uploadTaskIdentifier;
-(void)setUploadTaskIdentifier:(unsigned)arg1 ;
-(unsigned)configureTaskIdentifier;
-(void)setConfigureTaskIdentifier:(unsigned)arg1 ;
-(char)createdOffline;
-(void)setCreatedOffline:(char)arg1 ;
-(NSString *)transcodeVideoID;
-(void)setTranscodeVideoID:(NSString *)arg1 ;
-(NSDate *)lastConfigureFailureTimestamp;
-(NSDate *)lastUploadFailureTimestamp;
-(int)numberOfAutoRetryAttempts;
-(void)setNumberOfAutoRetryAttempts:(int)arg1 ;
-(void)setNumberOfManualCancels:(int)arg1 ;
-(int)autoRetryResumeUploadCount;
-(int)autoRetryConfigureCount;
-(void)setAutoRetryConfigureCount:(int)arg1 ;
-(NSMutableArray *)currentRangesUploadedAlready;
-(void)setWaterfall:(id<IGAnalyticsUploadWaterfall>)arg1 ;
-(float)videoUploadSpeed;
-(unsigned)photoBytesUploaded;
-(unsigned)videoBytesUploaded;
-(void)setVideoMaxDuration:(float)arg1 ;
-(int)numberOfManualRetries;
-(void)setNumberOfManualRetries:(int)arg1 ;
-(void)setQeUseSVE:(int)arg1 ;
-(NSDate *)lastUserActionTime;
-(void)setLastUserActionTime:(NSDate *)arg1 ;
-(NSDate *)shareActionTime;
-(void)setShareActionTime:(NSDate *)arg1 ;
-(NSMutableArray *)uploadStepCounts;
-(void)setUploadStepCounts:(NSMutableArray *)arg1 ;
-(void)setUploadWidthMin:(int)arg1 ;
-(void)setUploadWidthMax:(int)arg1 ;
-(void)setUploadWidthMaxForHiResLandscape:(int)arg1 ;
-(void)setMinDownscaleHQResize:(float)arg1 ;
-(IGUploadVideoMetaData *)videoMetadata;
-(NSData *)imageData;
-(IGRequestError *)error;
-(id)videoData;
-(NSString *)uploadID;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(IGRequest *)request;
-(UIImage *)image;
-(void)commonInit;
-(void)setErrorMessage:(NSString *)arg1 ;
-(NSString *)errorMessage;
-(void)setSessionID:(NSString *)arg1 ;
-(NSString *)sessionID;
-(void)setRequest:(IGRequest *)arg1 ;
-(char)hasVideo;
-(void)setError:(IGRequestError *)arg1 ;
-(int)resultStatus;
-(void)setResultStatus:(int)arg1 ;
@end

