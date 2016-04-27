
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IGFeedItem, NSMutableSet, NSSet;

@interface IGUsertagGroup : NSObject <NSCoding, NSCopying> {

	IGFeedItem* _feedItem;
	NSMutableSet* _inTagsSet;

}

@property (nonatomic,readonly) NSSet * inTags; 
@property (assign,nonatomic,__weak) IGFeedItem * feedItem;              //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,retain) NSMutableSet * inTagsSet;                  //@synthesize inTagsSet=_inTagsSet - In the implementation block
-(IGFeedItem *)feedItem;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(NSSet *)inTags;
-(char)currentUserIsTagged;
-(id)currentUserUsertag;
-(void)setInTagsSet:(NSMutableSet *)arg1 ;
-(void)removeUsertag:(id)arg1 ;
-(void)addUsertag:(id)arg1 ;
-(NSMutableSet *)inTagsSet;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)asDictionary;
-(char)updateWithDictionary:(id)arg1 ;
@end

