
#import <Instagram/Instagram-Structs.h>
#import <Instagram/FBDialogsParams.h>

@class NSURL, NSString, NSArray;

@interface FBLinkShareParams : FBDialogsParams {

	char _dataFailuresFatal;
	NSURL* _link;
	NSString* _name;
	NSString* _caption;
	NSString* _linkDescription;
	NSURL* _picture;
	NSArray* _friends;
	id _place;
	NSString* _ref;

}

@property (nonatomic,copy) NSURL * link;                            //@synthesize link=_link - In the implementation block
@property (nonatomic,copy) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * caption;                      //@synthesize caption=_caption - In the implementation block
@property (nonatomic,copy) NSString * linkDescription;              //@synthesize linkDescription=_linkDescription - In the implementation block
@property (nonatomic,copy) NSURL * picture;                         //@synthesize picture=_picture - In the implementation block
@property (nonatomic,copy) NSArray * friends;                       //@synthesize friends=_friends - In the implementation block
@property (nonatomic,copy) id place;                                //@synthesize place=_place - In the implementation block
@property (nonatomic,copy) NSString * ref;                          //@synthesize ref=_ref - In the implementation block
@property (assign,nonatomic) char dataFailuresFatal;                //@synthesize dataFailuresFatal=_dataFailuresFatal - In the implementation block
+(id)methodName;
-(void)setLinkDescription:(NSString *)arg1 ;
-(NSString *)linkDescription;
-(id)initWithLink:(id)arg1 name:(id)arg2 caption:(id)arg3 description:(id)arg4 picture:(id)arg5 ;
-(id)dictionaryMethodArgs;
-(char)dataFailuresFatal;
-(void)setDataFailuresFatal:(char)arg1 ;
-(void)setPicture:(NSURL *)arg1 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)validate;
-(NSURL *)link;
-(void)setLink:(NSURL *)arg1 ;
-(id)place;
-(void)setPlace:(id)arg1 ;
-(NSString *)caption;
-(void)setCaption:(NSString *)arg1 ;
-(NSString *)ref;
-(void)setRef:(NSString *)arg1 ;
-(void)setFriends:(NSArray *)arg1 ;
-(NSURL *)picture;
-(NSArray *)friends;
@end

