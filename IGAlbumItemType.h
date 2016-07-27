

@protocol IGAlbumItemType <NSObject>
@required
-(id)albumChannelPK;
-(id)takenAtDate;
-(int)viewerCount;
-(id)viewers;
-(id)feedItem;
-(id)pendingUpload;
-(id)user;
-(int)mediaType;
-(id)photo;
-(char)shouldLoop;
-(id)video;

@end

