

@interface IGSSOLoginUtils : NSObject
+(char)isUser:(id)arg1 partOfGroup:(id)arg2 ;
+(void)removeUser:(id)arg1 fromUserDefaultsGroup:(id)arg2 ;
+(void)addUser:(id)arg1 toUserDefaultsGroup:(id)arg2 ;
+(id)updateGroup:(id)arg1 byAddingUser:(id)arg2 ;
+(id)updateGroup:(id)arg1 byRemovingUser:(id)arg2 ;
@end

