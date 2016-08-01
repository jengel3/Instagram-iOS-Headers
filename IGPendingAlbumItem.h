
#import <Instagram/IGAlbumImageProvider.h>
#import <Instagram/IGVideoURLProvider.h>
#import <Instagram/IGAlbumItemType.h>

@class IGUploadModel, NSString;

@interface IGPendingAlbumItem : NSObject <IGAlbumImageProvider, IGVideoURLProvider, IGAlbumItemType> {

	IGUploadModel* _uploadModel;

}

@property (nonatomic,readonly) IGUploadModel * uploadModel;              //@synthesize uploadModel=_uploadModel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)mediaID;
-(id)takenAtDate;
-(id)feedItem;
-(id)pendingUpload;
-(int)viewerCount;
-(id)initWithUploadModel:(id)arg1 ;
-(id)imageURLForWidth:(float)arg1 ;
-(id)albumChannelPK;
-(id)viewers;
-(id)videoURLForVideoVersion:(int)arg1 ;
-(id)videoURLForCurrentNetworkConditions;
-(id)isAudioDetected;
-(IGUploadModel *)uploadModel;
-(id)previewImageData;
-(id)user;
-(int)mediaType;
-(id)photo;
-(char)shouldLoop;
-(double)totalDuration;
-(id)video;
-(id)preloadedImage;
@end

