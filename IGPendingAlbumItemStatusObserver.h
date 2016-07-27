

@protocol IGPendingAlbumItemStatusDelegate;
@class IGUploadModel;

@interface IGPendingAlbumItemStatusObserver : NSObject {

	IGUploadModel* _pendingUpload;
	id<IGPendingAlbumItemStatusDelegate> _delegate;
	int _status;
	float _progress;

}

@property (assign,nonatomic) int status;                                                        //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) float progress;                                                    //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) IGUploadModel * pendingUpload;                                     //@synthesize pendingUpload=_pendingUpload - In the implementation block
@property (assign,nonatomic,__weak) id<IGPendingAlbumItemStatusDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(IGUploadModel *)pendingUpload;
-(void)setPendingUpload:(IGUploadModel *)arg1 ;
-(void)updateForStatusChange;
-(void)renderProgressDidChange;
-(void)uploadProgressDidChange;
-(void)uploadStatusDidChange;
-(void)updateForProgressChange;
-(void)setDelegate:(id<IGPendingAlbumItemStatusDelegate>)arg1 ;
-(id<IGPendingAlbumItemStatusDelegate>)delegate;
-(void)setProgress:(float)arg1 ;
-(float)progress;
-(int)status;
-(void)setStatus:(int)arg1 ;
@end

