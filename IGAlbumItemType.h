

@protocol IGAlbumItemType <NSObject>
@required
-(id)mediaID;
-(id)takenAtDate;
-(id)feedItem;
-(id)pendingUpload;
-(int)viewerCount;
-(id)albumChannelPK;
-(id)viewers;
-(id)user;
-(int)mediaType;
-(id)photo;
-(char)shouldLoop;
-(double)totalDuration;
-(id)video;

@end

