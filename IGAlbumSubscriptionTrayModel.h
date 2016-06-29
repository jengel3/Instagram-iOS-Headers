
#import <Instagram/IGDKDiffable.h>

@class NSArray, IGFeedItem;

@interface IGAlbumSubscriptionTrayModel : NSObject <IGDKDiffable> {

	NSArray* _albumGroups;
	IGFeedItem* _myCurrentAlbum;
	NSArray* _myCollaborativeAlbums;

}

@property (nonatomic,readonly) NSArray * albumGroups;                        //@synthesize albumGroups=_albumGroups - In the implementation block
@property (nonatomic,readonly) IGFeedItem * myCurrentAlbum;                  //@synthesize myCurrentAlbum=_myCurrentAlbum - In the implementation block
@property (nonatomic,readonly) NSArray * myCollaborativeAlbums;              //@synthesize myCollaborativeAlbums=_myCollaborativeAlbums - In the implementation block
-(id)diffIdentifier;
-(NSArray *)albumGroups;
-(id)initWithAlbumGroups:(id)arg1 myCurrentAlbum:(id)arg2 myCollaborativeAlbums:(id)arg3 ;
-(IGFeedItem *)myCurrentAlbum;
-(NSArray *)myCollaborativeAlbums;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(char)isEmpty;
@end

