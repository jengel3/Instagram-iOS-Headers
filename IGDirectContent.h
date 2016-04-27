
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, IGUser, IGDate;

@interface IGDirectContent : NSObject <NSCoding, NSCopying> {

	NSString* _clientContextId;
	char _isUploading;
	NSString* _itemId;
	IGUser* _user;
	IGDate* _sentAt;

}

@property (nonatomic,copy) NSString * itemId;                                  //@synthesize itemId=_itemId - In the implementation block
@property (nonatomic,retain) IGUser * user;                                    //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) IGDate * sentAt;                                  //@synthesize sentAt=_sentAt - In the implementation block
@property (nonatomic,copy) NSString * clientContextId;                         //@synthesize clientContextId=_clientContextId - In the implementation block
@property (nonatomic,copy,readonly) NSString * digestDescription; 
@property (nonatomic,readonly) char senderIsCurrentUser; 
@property (nonatomic,readonly) char isUploading;                               //@synthesize isUploading=_isUploading - In the implementation block
@property (nonatomic,readonly) NSString * contentTypeString; 
-(char)senderIsCurrentUser;
-(id)initWithUser:(id)arg1 sentAt:(id)arg2 itemID:(id)arg3 ;
-(NSString *)clientContextId;
-(NSString *)contentTypeString;
-(void)setClientContextId:(NSString *)arg1 ;
-(void)setSentAt:(IGDate *)arg1 ;
-(char)contentHasReactions;
-(id)copyBySettingItemID:(id)arg1 ;
-(char)isUploading;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(NSString *)itemId;
-(void)setItemId:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)digestDescription;
-(IGDate *)sentAt;
@end

