
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContent.h>
#import <Instagram/IGDirectContentSuppressable.h>

@class NSString, NSArray;

@interface IGDirectThreadActionLog : IGDirectContent <IGDirectContentSuppressable> {

	char _hideInThread;
	NSString* _title;
	NSArray* _boldInfo;

}

@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSArray * boldInfo;                    //@synthesize boldInfo=_boldInfo - In the implementation block
@property (assign,nonatomic) char hideInThread;                     //@synthesize hideInThread=_hideInThread - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)hideInThread;
-(id)contentTypeString;
-(NSArray *)boldInfo;
-(void)setBoldInfo:(NSArray *)arg1 ;
-(void)setHideInThread:(char)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)digestDescription;
@end

