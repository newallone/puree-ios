#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PURLog : NSObject <NSCoding>

- (instancetype)initWithTag:(NSString *)tag date:(NSDate *)date userInfo:(nullable NSDictionary<NSString *, id> *)userInfo;

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *tag;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly, nullable) NSDictionary<NSString *, id> *userInfo;

@end

NS_ASSUME_NONNULL_END
