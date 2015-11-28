
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface IGEventFeedData : NSObject <NSCoding, NSCopying> {

	NSArray* _posts;
	NSString* _eventId;
	NSString* _eventTitle;
	NSString* _eventHeader;

}

@property (nonatomic,copy,readonly) NSArray * posts;                     //@synthesize posts=_posts - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventId;                  //@synthesize eventId=_eventId - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventTitle;               //@synthesize eventTitle=_eventTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventHeader;              //@synthesize eventHeader=_eventHeader - In the implementation block
-(NSString *)eventTitle;
-(NSString *)eventHeader;
-(NSArray *)posts;
-(id)initWithPosts:(id)arg1 eventId:(id)arg2 eventTitle:(id)arg3 eventHeader:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)eventId;
@end

