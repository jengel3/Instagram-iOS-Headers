
#import <Instagram/IGDKDiffable.h>

@protocol IGAlbumItemType;
@class NSArray, IGUser, NSDate;

@interface IGReelSubscriptionTrayItemModel : NSObject <IGDKDiffable> {

	char _isCurrentUserReel;
	char _seen;
	NSArray* _items;
	IGUser* _user;
	id<IGAlbumItemType> _currentItem;

}

@property (nonatomic,readonly) NSArray * items;                              //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) IGUser * user;                                //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) char isCurrentUserReel;                       //@synthesize isCurrentUserReel=_isCurrentUserReel - In the implementation block
@property (nonatomic,readonly) id<IGAlbumItemType> currentItem;              //@synthesize currentItem=_currentItem - In the implementation block
@property (nonatomic,readonly) char seen;                                    //@synthesize seen=_seen - In the implementation block
@property (nonatomic,readonly) NSDate * lastTakenDate; 
-(char)seen;
-(char)isCurrentUserReel;
-(id)initWithUser:(id)arg1 items:(id)arg2 ;
-(id)diffIdentifier;
-(NSDate *)lastTakenDate;
-(IGUser *)user;
-(char)isEqual:(id)arg1 ;
-(NSArray *)items;
-(id<IGAlbumItemType>)currentItem;
-(void)preload;
@end

