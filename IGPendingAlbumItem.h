
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
-(id)initWithUploadModel:(id)arg1 ;
-(id)albumChannelPK;
-(id)takenAtDate;
-(id)imageURLForWidth:(float)arg1 ;
-(int)viewerCount;
-(id)viewers;
-(id)feedItem;
-(id)pendingUpload;
-(id)videoURLForCurrentNetworkConditions;
-(IGUploadModel *)uploadModel;
-(id)videoURLForVideoVersion:(int)arg1 ;
-(id)previewImageData;
-(id)user;
-(int)mediaType;
-(id)photo;
-(char)shouldLoop;
-(id)video;
-(id)preloadedImage;
@end

