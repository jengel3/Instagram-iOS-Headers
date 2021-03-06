
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IGUser, IGUsertagGroup, NSString;

@interface IGUsertag : NSObject <NSCoding, NSCopying> {

	IGUser* _user;
	IGUsertagGroup* _group;
	NSString* _placeholderString;
	CGPoint _position;
	CGRect _faceRect;

}

@property (nonatomic,retain) NSString * placeholderString;               //@synthesize placeholderString=_placeholderString - In the implementation block
@property (nonatomic,readonly) IGUser * user;                            //@synthesize user=_user - In the implementation block
@property (assign,nonatomic) CGPoint position;                           //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) CGRect faceRect;                            //@synthesize faceRect=_faceRect - In the implementation block
@property (assign,nonatomic,__weak) IGUsertagGroup * group;              //@synthesize group=_group - In the implementation block
+(id)inTagWithUser:(id)arg1 atPosition:(CGPoint)arg2 ;
+(id)inTagFromDictionary:(id)arg1 ;
+(id)inTagWithPlaceholderString:(id)arg1 atPosition:(CGPoint)arg2 ;
-(id)usernameOrPlaceholder;
-(id)initWithUser:(id)arg1 placeholderString:(id)arg2 position:(CGPoint)arg3 ;
-(void)setPlaceholderString:(NSString *)arg1 ;
-(CGRect)faceRect;
-(void)setFaceRect:(CGRect)arg1 ;
-(IGUser *)user;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(CGPoint)position;
-(void)setGroup:(IGUsertagGroup *)arg1 ;
-(IGUsertagGroup *)group;
-(id)asDictionary;
-(NSString *)placeholderString;
@end

