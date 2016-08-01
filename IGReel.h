
#import <Instagram/IGStorableObject.h>

@class IGUser, NSDate, NSArray;

@interface IGReel : IGStorableObject {

	char _isNux;
	char _canReply;
	IGUser* _user;
	int _rankedPosition;
	int _seenRankedPosition;
	NSDate* _latestReelMediaDate;
	NSArray* _pendingItems;
	NSArray* _feedItems;

}

@property (nonatomic,readonly) NSArray * pendingItems;                    //@synthesize pendingItems=_pendingItems - In the implementation block
@property (nonatomic,readonly) NSArray * feedItems;                       //@synthesize feedItems=_feedItems - In the implementation block
@property (nonatomic,readonly) IGUser * user;                             //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) int rankedPosition;                        //@synthesize rankedPosition=_rankedPosition - In the implementation block
@property (nonatomic,readonly) int seenRankedPosition;                    //@synthesize seenRankedPosition=_seenRankedPosition - In the implementation block
@property (nonatomic,readonly) char isNux;                                //@synthesize isNux=_isNux - In the implementation block
@property (nonatomic,readonly) NSDate * latestReelMediaDate;              //@synthesize latestReelMediaDate=_latestReelMediaDate - In the implementation block
@property (nonatomic,readonly) char canReply;                             //@synthesize canReply=_canReply - In the implementation block
@property (nonatomic,readonly) char needsFetch; 
+(id)centralizedStore;
+(id)pkFromDict:(id)arg1 ;
+(id)reelForUser:(id)arg1 ;
-(NSArray *)feedItems;
-(NSArray *)pendingItems;
-(NSDate *)latestReelMediaDate;
-(void)updateFeedItems:(id)arg1 ;
-(void)removeFeedItem:(id)arg1 ;
-(void)updatePendingItems:(id)arg1 ;
-(id)sortedItems;
-(char)needsFetch;
-(int)rankedPosition;
-(int)seenRankedPosition;
-(char)isNux;
-(char)canReply;
-(char)seen;
-(id)reelViewModel;
-(id)albumViewModel;
-(IGUser *)user;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)currentItem;
-(char)updateWithDictionary:(id)arg1 ;
@end

