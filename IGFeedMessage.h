
#import <Instagram/IGStorableObject.h>

@class NSString, NSURL;

@interface IGFeedMessage : IGStorableObject {

	NSString* _title;
	NSString* _subtitle;
	NSURL* _thumbnailURL;
	int _badgeCount;
	NSURL* _targetURL;

}

@property (nonatomic,copy) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                 //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSURL * thumbnailURL;              //@synthesize thumbnailURL=_thumbnailURL - In the implementation block
@property (assign,nonatomic) int badgeCount;                    //@synthesize badgeCount=_badgeCount - In the implementation block
@property (nonatomic,retain) NSURL * targetURL;                 //@synthesize targetURL=_targetURL - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setBadgeCount:(int)arg1 ;
-(int)badgeCount;
-(Class)objectClass;
-(void)setThumbnailURL:(NSURL *)arg1 ;
-(NSURL *)thumbnailURL;
-(char)updateWithDictionary:(id)arg1 ;
-(void)setTargetURL:(NSURL *)arg1 ;
-(NSURL *)targetURL;
@end

