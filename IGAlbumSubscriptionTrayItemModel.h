
#import <Instagram/IGDKDiffable.h>

@class NSArray, IGPostItem, IGUser, NSDate;

@interface IGAlbumSubscriptionTrayItemModel : NSObject <IGDKDiffable> {

	char _isCurrentOrCollaborativeAlbum;
	char _seen;
	NSArray* _albumGroup;
	IGPostItem* _item;

}

@property (nonatomic,readonly) NSArray * albumGroup;                            //@synthesize albumGroup=_albumGroup - In the implementation block
@property (nonatomic,readonly) char isCurrentOrCollaborativeAlbum;              //@synthesize isCurrentOrCollaborativeAlbum=_isCurrentOrCollaborativeAlbum - In the implementation block
@property (nonatomic,readonly) IGUser * user; 
@property (nonatomic,readonly) IGUser * lastCollaborativeUser; 
@property (nonatomic,readonly) IGPostItem * item;                               //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) char seen;                                       //@synthesize seen=_seen - In the implementation block
@property (nonatomic,readonly) NSDate * lastTakenDate; 
-(id)diffIdentifier;
-(NSArray *)albumGroup;
-(char)isCurrentOrCollaborativeAlbum;
-(id)initWithAlbumGroup:(id)arg1 isCurrentOrCollaborativeAlbum:(char)arg2 lastSeenDate:(id)arg3 ;
-(IGUser *)lastCollaborativeUser;
-(NSDate *)lastTakenDate;
-(char)seen;
-(IGUser *)user;
-(char)isEqual:(id)arg1 ;
-(IGPostItem *)item;
@end

