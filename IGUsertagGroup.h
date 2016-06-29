
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IGFeedItem, NSMutableSet, NSSet;

@interface IGUsertagGroup : NSObject <NSCoding, NSCopying> {

	IGFeedItem* _feedItem;
	NSMutableSet* _inTagsSet;

}

@property (nonatomic,retain) NSMutableSet * inTagsSet;                  //@synthesize inTagsSet=_inTagsSet - In the implementation block
@property (nonatomic,readonly) NSSet * inTags; 
@property (assign,nonatomic,__weak) IGFeedItem * feedItem;              //@synthesize feedItem=_feedItem - In the implementation block
-(IGFeedItem *)feedItem;
-(NSSet *)inTags;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(void)setInTagsSet:(NSMutableSet *)arg1 ;
-(id)currentUserUsertag;
-(char)currentUserIsTagged;
-(NSMutableSet *)inTagsSet;
-(void)addUsertag:(id)arg1 ;
-(void)removeUsertag:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)asDictionary;
-(char)updateWithDictionary:(id)arg1 ;
@end

